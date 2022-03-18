#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
	string sent;
	cin >> sent;

	string* list = new string[sent.size()];

	for (int i = 0; i < sent.size(); i++) {
		list[i] = &sent[i];
	}

	sort(list, list + sent.size());
	for (int i = 0; i < sent.size(); i++) {
		cout << list[i] << "\n";
	}
}