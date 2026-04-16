#include <iostream>
#include <cmath>
using namespace std;

int main() {
	double radius;
	double volume;
	double pi = 3.14159;
	cout << "Enter the radius of the sphere: ";
	cin >> radius;
	volume = (4.0 / 3.0) * pi * exp(radius); //volume of the sphere using the formula V = (4/3) * π * r^3 using inbuilt function exp() to calculate r^3
	cout << "The volume of the sphere is: " << volume << endl;

}
