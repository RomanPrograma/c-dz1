#include <iostream>
using namespace std;

int main() {
	int R1, R2, R3;
	cout << "Enter R1 = ";
	cin >> R1;;
	cout << "Enter R2 = ";
	cin >> R2;
	cout << "Enter R3 = ";
	cin >> R3;;

	cout << "R0 = " << float(R1 * R2 * R3) / (R1 * R2 + R2 * R3 + R1 * R3);
	return 0;
}