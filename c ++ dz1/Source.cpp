#include <iostream>
using namespace std;

int main() {
	int V, a, t;
	cout << "Enter V = ";
	cin >> V;
	cout << "Enter a = ";
	cin >> a;
	cout << "Enter t = ";
	cin >> t;
	cout << "S = " << V * t + ((a * (t * t)) / 2);
	return 0;
}