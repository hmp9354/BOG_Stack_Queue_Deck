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

		if (sent == "push") {			
			cin >> list[size];
			size++;
		}
		else if (sent == "pop") {
			if (size) {
				cout << list[0] << "\n";

				int tmp = list[0];
				for (int j = 0; j < size - 1; j++) {
					list[j] = list[j + 1];
				}
				list[size - 1] = 0;
				size--;
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