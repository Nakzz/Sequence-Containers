//============================================================================
// Name        : p1.cpp
// Author      : Ajmain Naqib
// Version     :
// Copyright   :
// Description : P1:
//============================================================================

#include <iostream>
#include <string>
#include <vector>

using namespace std;

vector<int> task1(vector<int> v); // Can take user input
vector<int> task2(vector<int> v, int key, int index);
vector<int> task3(vector<int> v, int index);
void task4(vector<int> v);
void printVector(vector<int> v);

int main() {

	//empty vector created
	vector<int> v;
	int inKey;
	int inIndex;

	v = task1(v);
	cout << " The elements of the container are" << endl;
	printVector(v);

	cout << "Enter the value of the element you want to enter" << endl;
	cin >> inKey;
	cout << "enter the position" << endl;
	cin >> inIndex;

	v= task2(v, inKey, inIndex );
	cout << " the vector after insertion of a new value is" << endl;
	printVector(v);

	cout << "Enter the position of the element you want to delete" << endl;
	cin >> inIndex;
	v= task3(v, inIndex);
	printVector(v);


	task4(v);
	printVector(v);

	return 0;
}

vector<int> task1(vector<int> v) {

	int input;
	int i;

	cout << "enter a value for the vector ";
	while (cin >> i && i >= 0) {
		v.push_back(i);
		cout << "enter a value for the vector ";

	}

	return v;

}

vector<int> task2(vector<int> v, int key, int index) {
return v;
}

vector<int> task3(vector<int> v, int index) {
}

void task4(vector<int> v) {
	cout << "Enter the position of the element you want to delete" << endl;
}

void printVector(vector<int> v) {
//	cout <<"printing " << endl;

	for (int i = 0; i < v.size(); i++) {
		cout <<"value at pos " << i << ": is "<< v.at(i) << endl;
	}
	cout << endl << endl;
}
