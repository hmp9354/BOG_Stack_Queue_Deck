#include <iostream>
#include <string>
using namespace std;

int main() {
	string sent;
	cin >> sent;

	int list[26];
	for (int i = 0; i < 26; i++) {
		list[i] = -1;
	}

	for (int i = 0; i < sent.size(); i++) {
		if (list[sent[i] - 'a'] == -1) {
			list[sent[i] - 'a'] = i;
		}		
	}

	for (int i = 0; i < 26; i++) {
		cout << list[i] << " ";
	}
}