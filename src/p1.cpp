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
	signed inIndex;

	v = task1(v);
	cout << " The elements of the container are" << endl;
	printVector(v);

//	cout << "Enter the value of the element you want to enter" << endl;
//	cin >> inKey;
//	cout << "enter the position" << endl;
//	cin >> inIndex;
//
//	v = task2(v, inKey, inIndex);
//	cout << " the vector after insertion of a new value is" << endl;
//	printVector(v);

	cout << "Enter the position of the element you want to delete" << endl;
	cin >> inIndex;
	v = task3(v, inIndex);
	printVector(v);

	cout << "Enter the position of the element you want to delete" << endl;
	cin >> inIndex;
	v = task3(v, inIndex);
	printVector(v);

	cout << "Enter the position of the element you want to delete" << endl;
	cin >> inIndex;
	v = task3(v, inIndex);
	printVector(v);

	task4(v);
	printVector(v);

	return 0;
}

/**
 * Adds values to the vector, assuming that the user will only input integers
 * and only input one per line
 *
 * param v is the vector values are being added too
 * return the vector that has been modified
 */
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

/**
 * Adds values to the vector at specific position
 *
 * param v is the vector values are being added too
 * param key value that is being added
 * param index at location the value is being added
 * return the vector that has been modified
 */
vector<int> task2(vector<int> v, int key, signed int index) {

	vector<int>::iterator positionIterator;

//	cout << "adding new val to size of " << v.size() << endl;

	if (index >= v.size()) {
		//if bigger than vector dimension
		positionIterator = v.begin() + (v.size());
	} else if (index >= 0 && index < v.size()) {
		//if within vector dimension
		positionIterator = v.begin() + index;
	} else if (index < 0) {
		//if negative case
		positionIterator = v.begin();
	}

	v.insert(positionIterator, 1, key);

	cout << "added new val" << endl;

	return v;
}

/**
 * Removes values to the vector at specific position
 *
 * param v is the vector values are being added too
 * param index at location the value is being added
 * return the vector that has been modified
 */
vector<int> task3(vector<int> v,signed int index) {

	if(v.size()==0){
		return v;
	}

	if(index < 0){
//		cout << "negative int found" << endl;
		v.erase(v.begin());
				return v;
	}

	vector<int>::iterator positionIterator;

	if (index >= v.size()) {
		//if bigger than vector dimension
		positionIterator = v.begin() + (v.size() -1);
	} else if (index >= 0 && index < v.size()) {
		//if within vector dimension
		positionIterator = v.begin() + index;
	}

	v.erase(positionIterator);

	return v;
}

void task4(vector<int> v) {
	cout << "Enter the position of the element you want to delete" << endl;
}

void printVector(vector<int> v) {
//	cout <<"printing " << endl;

	for (int i = 0; i < v.size(); i++) {
		cout << "value at pos " << i << ": is " << v.at(i) << endl;
	}
	cout << endl << endl;
}
