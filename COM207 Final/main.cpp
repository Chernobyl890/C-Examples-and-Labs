#include <iostream>
using namespace std;

void printStatus(int myX, int myY){
	cout<<"You are at location ("<<myX<<", "<<myY<<")"<<endl;
	
}

string getUserCommand(){
	int i=0;
	
	string retVal;
	cout<<"?> ";
	cin>>retVal;
	
for (i=0; i<retVal.length(); i++) {
	retVal[i]=(char)toupper(retVal[i]);
}
	cout<<retVal<<endl;
	return retVal;
}

int main(int argc, char** argv) {
	
	int x = 0;
	int y = 0;
	string userCommand="NULL";
	
	while(userCommand!="EXIT"){
		printStatus(x,y);
		userCommand=getUserCommand();
		
		if (userCommand=="NORTH") y++;
		if (userCommand=="SOUTH") y--;
		if (userCommand=="EAST") x++;
		if (userCommand=="WEST") x--;
	}
	
	return 0;
}
