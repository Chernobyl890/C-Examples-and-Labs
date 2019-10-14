// Shane Irons - 5 September 2018 - Number18b.cpp 

#include <iostream>
using namespace std;

int main(int argc, char** argv) {
	
	int userInput, digitalRoot;
	
	// Part 1. Get User Input
	
	cout <<"Please enter a whole number ?> "; 
	cin >> userInput;
	cout <<"You entered "<<userInput<<endl;
	
	// Part 2. Positive, Negative, or Zero
	
	if (userInput==0){
		cout<<"The value is zero."<<endl;
	} else {
		if (userInput>0) {
			cout<<"the value is positive."<<endl;
		} else {
			cout<<"the value is negative."<<endl;
		}
	}
	
	// Part 3. Even or Odd
	
	if ((userInput%2)==0){
		cout<<"The value is even."<<endl;
	} else {
		cout<<"The value is odd."<<endl;
	}
	
	digitalRoot = userInput; 
	if (digitalRoot<0) digitalRoot = digitalRoot * -1; 
	digitalRoot = digitalRoot % 9;
	if (digitalRoot==0) digitalRoot = 9;
	cout<<"The digital root of the value is "<<digitalRoot<<endl;	
	
	return 0;
}
