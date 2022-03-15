#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main() {
	stack<char> a;

	string sent;
	cin >> sent;

	for (int i = 0; i < sent.size(); i++) {
		a.push(sent[i]);
	}

	char pre;
	

	int result = 0;
	int right = 0;	

	for (int i = 0; i < sent.size(); i++) {
		if (a.top() == ')') {
			pre = a.top();
			right++;
		}
		else {
			if (pre == ')') {
				right--;
				result += right;				
			}
			else {
				right--;
				result++;
			}
			pre = a.top();
		}
		a.pop();
	}

	cout << result;
}