#include <iostream>
#include <string>
using namespace std;

int main() {
	string sent;
	getline(cin, sent);

	for (int i = 0; i < sent.size(); i++){
		if (sent[i] >= 'A' && sent[i] <= 'Z') {			
			for (int j = 0; j < 13; j++) {
				sent[i]++;
				if (sent[i] > 'Z') {
					sent[i] = 'A';
				}
			}			
		}
		else if (sent[i] >= 'a' && sent[i] <= 'z') {
			for (int j = 0; j < 13; j++) {
				sent[i]++;
				if (sent[i] > 'z') {
					sent[i] = 'a';
				}
			}
		}
	}

	cout << sent;
}