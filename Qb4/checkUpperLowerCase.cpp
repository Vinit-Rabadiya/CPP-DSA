#include <iostream>
using namespace std;

//function to check if the character is uppercase, lowercase, or not an alphabetic letter
void checkUpperLowerCase(char ch) {
	if (ch >= 'A' && ch <= 'Z') {
		cout << "The character is an uppercase letter." << endl;
	}
	else if (ch >= 'a' && ch <= 'z') {
		cout << "The character is a lowercase letter." << endl;
	}
	else {
		cout << "The character is not an alphabetic letter." << endl;
	}
}

int main() {
	char inputChar;
	cout << "Enter a character:";
	cin >> inputChar;
	checkUpperLowerCase(inputChar); //calling the function to check the character
}