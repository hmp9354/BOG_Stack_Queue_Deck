#include <iostream>
#include <string>
using namespace std;

int main() {
	int N;
	cin >> N;

	int list[10002] = { 0, };
	int size = 0;

	string sent;
	for (int i = 0; i < N; i++) {
		cin >> sent;

		if (sent == "push_front") {
			for (int i = size; i > 0; i--) {
				list[i] = list[i - 1];
			}
			cin >> list[0];
			size++;
		}
		else if (sent == "push_back") {
			cin >> list[size];
			size++;
		}
		else if (sent == "pop_front") {
			if (size) {
				cout << list[0] << "\n";

				for (int i = 0; i < size; i++) {
					list[i] = list[i + 1];
				}
				size--;
				list[size] = 0;
			}
			else {
				cout << "-1\n";
			}
			
		}
		else if (sent == "pop_back") {
			if (size) {
				size--;
				cout << list[size] << "\n";
			}
			else {
				cout << "-1\n";
			}
		}
		else if (sent == "size") {
			cout << size << "\n";
		}
		else if (sent == "empty") {
			if (size) {
				cout << "0\n";
			}
			else {
				cout << "1\n";
			}
		}
		else if (sent == "front") {
			if (size) {
				cout << list[0] << "\n";
			}
			else {
				cout << "-1\n";
			}
		}
		else if (sent == "back") {
			if (size) {
				cout << list[size-1] << "\n";
			}
			else {
				cout << "-1\n";
			}
		}
	}
}