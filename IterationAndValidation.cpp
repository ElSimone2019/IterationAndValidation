// IterationAndValidation.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include <iostream>
#include <string>

using namespace std;

int main()
{
    //Variables to hold module result
	int result = 0;
	
	//input for module result
	cout << "Please input your result";
	cin >> result;

	//validation loop
	while (result < 0 || result > 100) {
		cout << "Result outside of normal range";
		cin >> result;
	}

	//
	if (result >= 50) {
		
	}
}