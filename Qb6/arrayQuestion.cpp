#include <iostream>
using namespace std;

int main() {
	int arr[5]; //declaring an array of size 5
	cout << "Enter 5 numbers: " << endl;
	for (int i = 0; i < 5; i++) { //taking input from the user and storing it in the array
		cin >> arr[i];
	}

	int sum = 0;
	for (int j = 0; j < 5; j++) { //calculating the sum of the numbers in the array
		sum += arr[j];
	}

	cout << "The sum of the numbers is: " << sum << endl;

	double avg = sum / 5.0; //calculating the average by dividing the sum by the number of elements 5

	cout << "The average of the numbers is: " << avg << endl;
}