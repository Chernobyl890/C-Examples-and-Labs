// Shane Irons - 10 October 2018 - Alphabet - Programming C C++
#include <iostream>
#include <string>
using namespace std; 
	
// --------------------------------------------------------------------------------------
// Global Variables
// --------------------------------------------------------------------------------------

const char plainTextAlphabet[] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 
	'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
	
const int NUM_LETTERS = 26;

char cipherTextAlphabet[NUM_LETTERS];
int numInCipherAlphabet = 0;

// --------------------------------------------------------------------------------------
// Functions
// --------------------------------------------------------------------------------------

void atBash() {
	int i;
	for (i=0; i<NUM_LETTERS; i++) {
		cipherTextAlphabet[i] = plainTextAlphabet[NUM_LETTERS-1-i];
	}
}

void printAlphabet () {
	int i;
	cout<<"Plain\tCipher"<<endl;
	cout<<"-----\t-----"<<endl;
	for (i=0; i<NUM_LETTERS; i++){
		cout<<plainTextAlphabet[i]<<"\t"<<cipherTextAlphabet[i]<<endl;
	}
	cout<<"=====\t====="<<endl;
}

bool isInPlainTextAlphabet(char x) {
	return ((x>='A') && (x<='Z'));
}

bool isNotInCipherAlphabet(char x) {
	int i;
	bool retVal = true;
	for (i=0; i<numInCipherAlphabet; i++) {
		if(cipherTextAlphabet[i]==x) {
			retVal = false;	
		}
	}
	return retVal;
}

void keyWord(string keyWord) {
	int i;
	char letterToCheck;
	
	// Part 1. Insert letters from keyword
	
	for (i=0; i<keyWord.length(); i++) {
		letterToCheck = (char)toupper(keyWord[i]);
		if (isInPlainTextAlphabet(letterToCheck)) {
			if (isNotInCipherAlphabet(letterToCheck)) {
				cipherTextAlphabet[numInCipherAlphabet] = letterToCheck;
				numInCipherAlphabet++;
			}
		}
	}
	
	// Part 2. Loop over alphabet and insert missing
	
	for (i=0; i<NUM_LETTERS; i++) {
		letterToCheck = plainTextAlphabet[i];
		if (isNotInCipherAlphabet(letterToCheck)) {
				cipherTextAlphabet[numInCipherAlphabet] = letterToCheck;
				numInCipherAlphabet++;
			}
	}
}

// Takes a keyword entered in the prompt when launching the programming and adds it to the cipher then continues the alphabet string
	
int main(int argc, char** argv) {
	string myKeyword;
	int i;
	
	if (argc<2) {
		cout<<"AtBash"<<endl;
		atBash();
		
	}
	else {
		myKeyword = "";
		for (i=1;i<argc;i++) myKeyword = myKeyword + argv[1];
		cout<<"KeyWord : "<<myKeyword<<endl;
		keyWord(myKeyword);
	}
	printAlphabet();
	
	
	
	return 0;
}
