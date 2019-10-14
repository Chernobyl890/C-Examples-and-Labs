// Shane Irons - Matrices - 24 October 2018
#include <iostream>
using namespace std;

// ************************************************************************************************

int A[3][3] = {{4,9,2}, {3,5,7}, {8,1,6}};
int I[3][3] = {{1,0,0}, {0,1,0}, {0,0,1}};
int B[3][3] = {{1,0,2}, {0,3,0}, {4,0,5}};
int C[3][3];

// ************************************************************************************************
// void multiplyABintoC(int myPointer[3][3] -- print the matrix passed as a parameter. 
// ************************************************************************************************
void printMatrix(int myMPointer[3][3]) {
	int i, j;
	
	for(i=0; i<3; i++) {
		for (j=0; j<3; j++) {
			cout<<myMPointer[i][j]<<"\t";
		}
		cout<<"\n";
	}
}

// ************************************************************************************************
// Multiply 1st 2 matrices and write the result into the third.
// ************************************************************************************************

void multiplyABintoC(int X[3][3], int Y[3][3], int Z[3][3]){
	int i, j, k; 
	
	for(i=0;i<3;i++) {
		for(j=0;j<3;j++) {
			Z[i][j] = 0;
			for (k=0; k<3; k++) {
				Z[i][j] = Z[i][j] + (X[i][k] * Y[k][j]); 
			}
		
		}
	}
}
// Int Main where the program runs itself and outputs the values

int main(int argc, char** argv) {
	cout<<"Print Matrix A "<<endl;
	printMatrix(A);
	cout<<endl<<"Print Matrix B "<<endl;
	printMatrix(B);
	multiplyABintoC(A, B, C);
	cout<<endl<<"Print Matrix C "<<endl;
	printMatrix(C);
	cout<<endl<<"Print Matrix I "<<endl;
	printMatrix(I);
	multiplyABintoC(A, I, C);
	cout<<endl<<"Print Matrix C"<<endl;
	printMatrix(C);
	return 0;
} 


