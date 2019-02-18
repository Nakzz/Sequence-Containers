//============================================================================
// Name        : p0.cpp
// Author      : Ajmain Naqib
// Version     :
// Copyright   : Your copyright notice
// Description : P0, Ansi-style
//============================================================================

#include <iostream>
#include <string>

using namespace std;

int main() {

	string name;
	int nameLen;
//    int spaceLen;

	string namePrompt = "Your name here ";
	string welcomePrompt = "* Welcome ";
	string enjoyPrompt = "! Enjoy the class! *";

	cout << namePrompt;

//    cin >> name;
//    name= cin.get();

	getline(cin, name); // Get new line input
	cout << endl;

	if (name.length() == 0) {
		//print first line of ***
		for (int i = 0; i < 43; i++) {
			cout << "*";
		}
		cout << endl << "*";

		//print first line of spaces
		for (int i = 0; i < 41; i++) {
			cout << " ";
		}

		cout << "*" << endl;
		cout << "* Welcome CS368 Student! Enjoy the class! *";
		cout << endl << "*";

		// Print second line of spaces
		for (int i = 0; i < 41; i++) {
			cout << " ";
		}
		cout << "*" << endl;

		//print last line of ***
		for (int i = 0; i < 43; i++) {
			cout << "*";
		}
		cout << endl;

	} else {
		//compute first lines of ****
		nameLen = name.length();

		//print first line of ***
		for (int i = 0; i < 30 + nameLen; i++) {
			cout << "*";
		}
		cout << endl << "*";

		//print line of space
		for (int i = 0; i < 28 + nameLen; i++) {
			cout << " ";
		}
		cout << "*" << endl;

		//print proper prompt
		cout << welcomePrompt + name + enjoyPrompt;

		cout << endl << "*";

		//print last line of ***
		for (int i = 0; i < 28 + nameLen; i++) {
			cout << " ";
		}
		cout << "*" << endl;

		//print last line of space
		for (int i = 0; i < 30 + nameLen; i++) {
			cout << "*";
		}
		cout << endl;
	}

	return 0;
}
