#include <iostream> //include the iostream library for input and output
using namespace std; //use the standard namespace to to avoid std::

int main() {
	int days, totalSeconds; //declaring two integer variables, days and totalSeconds
	cout << "Enter the number of days: ";
	cin >> days;
	totalSeconds = days * 24 * 60 * 60; //calculating the total number of seconds in the given number of days
	cout << "The number of seconds in " << days << " days is: " << totalSeconds << endl;
}