#include <iostream>
#include <string>
using namespace std;

int main() {
	string sent;
	cin >> sent;

	int list[26] = { 0, };

	for (int i = 0; i < sent.size(); i++) {
		list[sent[i] - 'a']++;
	}

	for (int i = 0; i < 26; i++) {
		cout << list[i] << " ";
	}
}