#include <iostream>
#include <string>
using namespace std;

int main() {
	int small = 0;
	int big = 0;
	int num = 0;
	int space = 0;

	string sent;
	while (1) {
		cin >> sent;

		for (int i = 0; i < sent.size(); i++) {
			if (sent[i] >= 'A' && sent[i] <= 'Z') {
				big++;
			}
			else if (sent[i] >= 'a' && sent[i] <= 'z') {
				small++;
			}
			else if (sent[i] >= '1' && sent[i] <= '9') {
				num++;
			}
			else {
				space++;
			}
		}

		cout << small << " " << big << " " << num << " " << space << "\n";
	}
}