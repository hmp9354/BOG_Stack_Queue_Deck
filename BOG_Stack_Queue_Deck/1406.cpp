// 틀린 코드
#include <iostream>
#include <string>
using namespace std;

char list[600000] = { 0, };

int main() {
	string sent;
	cin >> sent;

	for (int i = 0; i < sent.size(); i++) {
		list[i] = sent[i];
	}

	int location = sent.size();
	int size = sent.size();
	int M;
	cin >> M;

	string com;
	for (int i = 0; i < M; i++) {
		cin >> com;
		if (com == "L") {
			if (location) {
				location--;
			}
		}
		else if (com == "D") {
			if (location < size) {
				location++;
			}
		}
		else if (com == "B") {
			if (location) {
				for (int i = location - 1; i < size; i++) {
					list[i] = list[i + 1];
				}
				list[size] = 0;
				size--;
				location--;
			}
		}
		else if (com == "P") {
			for (int i = size; i > location; i--) {
				list[i] = list[i - 1];
			}
			cin >> list[location];
			location++;
			size++;

		}
	}

	for (int i = 0; i < size; i++) {
		cout << list[i];
	}
}