// Shane Irons - Programming C++ - Game Piece - 11/16/2018
#include <iostream>
#include "gamepiece.h"
using namespace std;

int main(int argc, char** argv) {
	int i;
	GamePiece myPawn;
	GamePiece myKnight(3,5);
	GamePiece myBishop(3,5);
	
	cout<<"Hello World"<<endl;
	cout<<"myPawn: "<<myPawn.toString()<<endl;
	cout<<"myKnight: "<<myKnight.toString()<<endl;
	cout<<"myBishop: "<<myBishop.toString()<<endl;
	cout<<"Comparing myKnight to myBishop: ";
	cout<<(myKnight==myBishop)<<endl;
	cout<<"Comparing myKnight to myPawn: ";
	cout<<(myKnight==myPawn)<<endl;
	
	cout<<"Copying myKnight into myPawn"<<endl;
	myPawn=(myKnight);
	cout<<"myPawn: "<<myPawn.toString()<<endl;
	cout<<"myKnight: "<<myKnight.toString()<<endl;
	cout<<"Comparing myKnight to myPawn: ";
	cout<<(myKnight==myPawn) <<endl;
	
	cout<<"myPawn: "<<myPawn<<endl;
	cout<<"myKnight: "<<myKnight<<endl;
	cout<<"myBishop: "<<myBishop<<endl;
	return 0;
}
