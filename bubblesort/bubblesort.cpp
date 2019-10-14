// Shane Irons - 10 October 2018 - BubbleSort - Programming C C++
#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;

// GLOBAL VARIABLES

const int MAX_NUMBER_ITEMS = 8;

int myData[MAX_NUMBER_ITEMS];

// --------------------------------------------------------------------------------------------------------
//  Randomizes the 8 numbers
// --------------------------------------------------------------------------------------------------------
void initializeMyData() {
	int i;
	for (i=0;i<MAX_NUMBER_ITEMS; i++) {
		myData[i] = rand() % 100;
	}
}

// --------------------------------------------------------------------------------------------------------
//   Prints data on screen and lists the numbers as well as prints a border
// --------------------------------------------------------------------------------------------------------
void printMyData(){
		int i;
		cout<<"------------------------------------------------------------------"<<endl;
	for (i=0;i<MAX_NUMBER_ITEMS; i++) {
		cout<<myData[i];
		if(i==(MAX_NUMBER_ITEMS-1)){
			cout<<endl;
		} else {
			cout<<"\t";
		}
	}
	cout<<"------------------------------------------------------------------"<<endl;
}


// --------------------------------------------------------------------------------------------------------
//   Names a bool and assigns integers A and B to it 
// --------------------------------------------------------------------------------------------------------
bool isInOrder(int A, int B) {
	return (A<=B);
}


// --------------------------------------------------------------------------------------------------------
//   VERBOSE set to false, but shows what numbers are being calculated and switched 
// --------------------------------------------------------------------------------------------------------
void Swap(int* ptrA, int* ptrB){
	int temp;
	const bool VERBOSE = false;
	if (VERBOSE) cout<<"ptrA points to "<<ptrA<<" which contains "<<(*ptrA)<<endl;
	if (VERBOSE) cout<<"ptrB points to "<<ptrB<<" which contains "<<(*ptrB)<<endl;
	
	temp = *ptrA;
	*ptrA = *ptrB;
	*ptrB = temp; 
	
	if (VERBOSE) cout<<"ptrA points to "<<ptrA<<" which contains "<<(*ptrA)<<endl;
	if (VERBOSE) cout<<"ptrB points to "<<ptrB<<" which contains "<<(*ptrB)<<endl;
}
// --------------------------------------------------------------------------------------------------------
//   Swaps numbers to order them from left to right from smallest to largest
// --------------------------------------------------------------------------------------------------------
void bubbleSort(){
	int i,j;
	const bool VERBOSE = true;
	for (i=0; i<MAX_NUMBER_ITEMS-1;i++){
		for (j=i+1; j<MAX_NUMBER_ITEMS; j++){
			if (!(isInOrder(myData[i], myData[j]))) {
				Swap(&myData[i], &myData[j]);
			}
		}
		if (VERBOSE) printMyData();
	}
}


// --------------------------------------------------------------------------------------------------------
//   End of program, return values and print data
// --------------------------------------------------------------------------------------------------------
int main(int argc, char** argv) {
	initializeMyData();
	printMyData();
	bubbleSort();
	printMyData();
	
	return 0;
}
