#include <iostream>
#include <string>
using namespace std;
string reverseString(const string& s, int index) {
	if (index <= 0) {
		return string(1, s[0]);
	}
	return s[index] + reverseString(s, index - 1);
}
int main() {
	string input;
	cout << "Enter a string: ";
	getline(cin, input);
	string reversedString = reverseString(input, input.length() - 1);
	cout << "Reversed String: " << reversedString << endl;
	return 0;
}
