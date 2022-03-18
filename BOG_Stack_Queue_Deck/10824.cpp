#include <iostream>
#include <string>
#include <math.h>
using namespace std;

int main() {
	string a;
	string b;
	string c;
	string d;

	cin >> a >> b >> c >> d;

	long long aI;
	long long cI;

	aI = pow(10, b.size()) * stoi(a);
	cI = pow(10, d.size()) * stoi(c);

	cout << aI + cI + stoi(b) + stoi(d);
}