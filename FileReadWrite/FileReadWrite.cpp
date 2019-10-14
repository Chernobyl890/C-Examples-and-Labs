#include <iostream>
#include <fstream>
#include <ctime>
#include <cstdlib>
using namespace std;

string names[] = {"Alice", "Bob", "Carla", "Dave", "Eve", "Fred", "Gina"};


int main(int argc, char** argv) {
	int i;
	string myLineOfData;
	ofstream myTarget;
	ifstream mySource;
	
	
	// Create a file named grades.txt and fill w/ random data
	
	myTarget.open("grades.txt");
	if(myTarget.is_open()){
		myTarget<<"Name\tGrade"<<endl;
		myTarget<<"====\t===="<<endl;
		for (i=0; i<7; i++) {
			 myTarget<<names[i]+"\t";
			 myTarget<<(51+rand()%50)<<endl;
		}
		
		myTarget<<"====\t===="<<endl;
		myTarget.close();
		
		} else {
			cout<<"ERROR: could not open target file grades.txt"<<endl;
		}
	
	// read a file named grades.txt and print to cout
	mySource.open("grades.txt");
	if(mySource.is_open()) {
		while (!mySource.eof()) {
			//mySource>>myLineOfData;  THIS IS WRONG!
			getline(mySource,myLineOfData);
			cout<<myLineOfData<<endl;
		}
		mySource.close();
		
	}	else {
			cout<<"ERROR: could not open source file grades.txt"<<endl;
		}
	
	
	return 0;
}
