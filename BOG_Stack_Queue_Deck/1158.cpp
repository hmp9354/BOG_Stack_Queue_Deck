#include <iostream>
#include <list>
using namespace std;

int main() {
	int N, K;
	cin >> N >> K;

	list<int> yosep;
	list<int>::iterator iter;
	iter = yosep.begin();
	iter++;
	iter++;

	for (int i = 1; i <= N; i++) {
		yosep.push_back(i);
	}

	for (int i = 1; i <= N; i++) {
		cout << iter;
	}	
}