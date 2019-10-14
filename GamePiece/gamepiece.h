// Shane Irons - Programming C++ - Game Piece - 11/16/2018
#include <iostream>
#include <string>
using namespace std;

class GamePiece {
	friend class ostream;
	private:
		int x;
		int y;
	public:
		GamePiece();
		GamePiece(int,int);
		
		void setX(int N){x = N;};
		void setY(int N){y = N;};
		void setXY(int A,int B) {x=A; y=B;};
		
		int getX() {return x;};
		int getY() {return y;};
		
		string myIntToString(int);
		string toString();
		
		bool isEqualto(GamePiece );
		
	
		void copyFrom(GamePiece);
		bool operator == (const GamePiece Karl) {
			return ((x==Karl.x) && (y==Karl.y));
		}
		void operator = (const GamePiece that) {
			this->x=that.x; this->y=that.y;
		}
};


	// ----------------------------------------------
	// Constructors
	// ----------------------------------------------
	
		GamePiece::GamePiece() {
			x = 0;
			y = 0;
	}
		GamePiece::GamePiece(int a, int b) {
		
		x = a;
		y = b;
		
		
	};
	
	string GamePiece::myIntToString(int N){
		string retVal = "0" ;
		bool isNegative = (N<0);
		int scratchNum = N;
		string myDigits[] = {"0", "1", "2", "3", "4", "5", "6", "7", "8", "9"};
		int digitNum;
		if (N!=0) {
			if (isNegative) scratchNum = -1 * N;
			retVal = "";
			while (scratchNum>0) {
			digitNum = scratchNum % 10;
			retVal = myDigits[digitNum].append(retVal);
			scratchNum = scratchNum / 10;
		}
		if (isNegative) retVal = string("-").append(retVal);
			
		}
		return retVal;
		
		
		
	}
	
	string GamePiece::toString(){
		string retVal="[";
		retVal=retVal.append(myIntToString(x));
		retVal=retVal.append(", ");
		retVal=retVal.append(myIntToString(y));
			retVal=retVal.append("]");
			return retVal;}
		
bool GamePiece::isEqualto(GamePiece theOtherPiece){
			return ((this->x==theOtherPiece.x)&&(this->y==theOtherPiece.y));
}
		
		void GamePiece::copyFrom(GamePiece that){
			this->x=that.x;
			this->y=that.y;
		}
			
			inline ostream & operator << (ostream& os, GamePiece &GP) {
				os <<GP.toString();
				return os;
			}
		
		


	


