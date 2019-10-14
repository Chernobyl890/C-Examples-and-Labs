#include <iostream>
#include <iomanip>
// Shane Irons - 9/17/2018 - Programming C++ - Multiplication Table - Lab 07
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */


int main(int argc, char** argv) {
	int i, j;
	
	// Part 1: Print the Header Row
	
	cout<<setw(5)<<"*";
	for (i=1; i<=10; i++){
		cout<<setw(5)<<i;
	}
	cout<<endl;
	
	// Part 2: Print the body of the table
	
	for (i=1;i<=10;i++){
	cout<<setw(5)<<setprecision(2)<<i;
	for (j=1; j<=10; j++){
		cout<<setw(5)<<setprecision(2)<<(i*j);  // Since I declared I and J integers, adding the multiplication at the end of this cout string will create the multiplication table
	
		}
	cout<<endl;
	}
	
	

	return 0;
}
