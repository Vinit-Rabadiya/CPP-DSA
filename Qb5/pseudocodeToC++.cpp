#include <iostream>
using namespace std;

int main() {
	double x = 0;
	int y = 20;
	// do-while loop to execute the block of code at least once and continue as long as y is greater than or equal to 6
	do {
		y = y - 4;
		x = x + (2.0 / y);
	} while (y >= 6); //same as y<6 but with the opposite condition to continue the loop

	cout << "x: " << x << endl;
}