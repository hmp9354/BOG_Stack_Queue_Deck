#include <iostream>
#include <string>
using namespace std;

int main() {
	int size = 0;
	int list[10000] = { 0, };

	string sent;
	int num;

	int N;
	cin >> N;
	
	for(int i = 0;i < N;i++) 
	{
		cin >> sent;

		if (sent == "push") {
			cin >> num;
			
			list[size] = num;
			size++;
		}
		else if (sent == "pop") {			
			if (size > 0) {
				size--;
				cout << list[size] << "\n";
				list[size] = 0;								
			}
			else {
				cout << "-1\n";
			}			
		}
		else if (sent == "size") {
			cout << size <<"\n";
		}
		else if (sent == "empty") {
			if (size) {
				cout << "0\n";
			}
			else {
				cout << "1\n";
			}
		}
		else if (sent == "top") {
			if (size) {
				cout << list[size-1] << "\n";
			}
			else {
				cout << "-1\n";
			}
		}

	}
}