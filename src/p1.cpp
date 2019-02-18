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
void task3();
void task4();
void printVector(vector<int> v);

int main() {

	//empty vector created
	vector<int> v;

	v = task1(v);
	printVector(v);

//	task2();
//	printVector(v);
//
//	task3();
//	printVector(v);
//
//	task4();
//	printVector(v);

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

void task3() {
}

void task4() {
}

void printVector(vector<int> v) {
	cout <<"printing " << endl;

	for (int i = 0; i < v.size(); i++) {
		cout <<"value at pos" << i << ": is "<< v.at(i) << endl;
	}
}
