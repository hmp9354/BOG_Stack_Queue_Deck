#include <iostream>
#include <string>
#include <stack>
using namespace std;

void PS(string sent);

int main() {
	int T;
	cin >> T;

	string sent;
	for (int i = 0; i < T; i++) {
		cin >> sent;
		PS(sent);
	}	
	
}

void PS(string sent) {
	stack<char> a;

	for (int i = 0; i < sent.size(); i++) {
		a.push(sent[i]);
	}

	int right = 0;
	int left = 0;

	for (int i = 0; i < sent.size(); i++) {
		if (a.top() == ')') {
			right++;
		}
		else {
			left++;
			if (left > right) {
				cout << "NO\n";				
				return;
			}
			else if (right > 0) {
				right--;
				left--;
			}
		}
		a.pop();
	}

	if (right > 0 || left > 0) {
		cout << "NO\n";
	}
	else {
		cout << "YES\n";
	}
}