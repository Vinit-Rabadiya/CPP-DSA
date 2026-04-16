#include <iostream>
using namespace std;

int main() {
	double side, area, perimeter;
	cout << "Enter the length of the side of the square: ";
	cin >> side;
	area = side * side; // Area of a square is side^2
	perimeter = 4 * side; // Perimeter of a square is 4 times length
	cout << "Area of the square: " << area << endl;
	cout << "Perimeter of the square: " << perimeter << endl;
	return 0;
}