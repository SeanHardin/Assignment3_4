//============================================================================
// Name        : Assignment3.cpp
// Author      : Sean Hardin
// Date        : 10/31/17
// Copyright   : Your copyright notice
// Description : Assignment 3 for cs300, includes main for barbershop,
// 				 stack based summation, and recursively printing an int backwards
//============================================================================

#include <iostream>
using namespace std;
#include <sstream>

void reverseDigits(int);

int main() {

	//***PART IV********************************************
	int n;
	bool valid = 0;//so while loop starts
	string str2;//because it died from splitting
	while (!valid){
			valid = 1;
			cout << "Enter any positive number: ";
			getline (cin, str2);//reusing str2
			for (int i = 0; i < str2.length(); i++){
				if (str2[i] < '0' || str2[i] > '9')
					valid = 0;
			}

			if (!valid)
				cout << "Only integer values allowed." << '\n';
			if (str2 == ""){//block the empty string from going through
				valid = 0;
				cout << "You can't reverse nothingness. Try again." << '\n';
			}
		}
	stringstream ss;//to turn string back into integer
	ss << str2;
	ss >> n;
	reverseDigits(n);

	return 0;
}

void reverseDigits(int x){
	if (x > 0){//does nothing once x/10 reaches 0
		cout << x % 10;//print last digit
		reverseDigits(x / 10);//call again without last digit
	}
}
