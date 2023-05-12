#include <iostream>
using namespace std;

int main() {
	float pi = 3.14;
	int L;
	cout << "Enter L = ";
	cin >> L;
	cout << "R = " << L / 2 * pi << "\n";
	float R = L / 2 * pi;
	cout << "S = " << pi * (R * R);
	return 0;
}