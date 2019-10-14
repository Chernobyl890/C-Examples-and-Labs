#include <iostream>
// Functions - Shane Irons - 9/21/2018 - Programming C C++ - Compute days into year 
        
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

// -------------------------------------------------------------------------------------------------------------------------------
// bool isLeapYear(int yearToTest) -- returns true if the year in yearToTest is a leap year in the Gregorian calendar.
// -------------------------------------------------------------------------------------------------------------------------------

bool isLeapYear(int yearToTest){
	bool retVal = false;
	if ((yearToTest%4)==0) {
			retVal = true;
		if ((yearToTest%100)==0) {
			retVal = false;
			if ((yearToTest%400)==0) retVal = true;
		}
	}
	return retVal;
}
	
// -------------------------------------------------------------------------------------------------------------------------------
// intDaysIntoYear(int myYear, int myMonth, int myDay) -- return the day in the month for the specified year. 
// -------------------------------------------------------------------------------------------------------------------------------
	
int daysInMonth(int myYear, int myMonth){
	int retVal = -1;     // Error Code -1 -> invalid month
	if ((myMonth>= 1) && (myMonth<=12)) {
		retVal = 31;
		if (myMonth==2){
			retVal = (isLeapYear(myYear))?29:28;
		}
		if ((myMonth==4) || (myMonth==6) || (myMonth==9) || (myMonth==11)){
			retVal = 30;
		}
	}

	return retVal;
}

// -------------------------------------------------------------------------------------------------------------------------------
//  int daysIntoYear(int myYear, int myMonth, int myDay) -- return the day in the year specified by the given date in the Gregorian Calendar. 
// -------------------------------------------------------------------------------------------------------------------------------

int daysIntoYear (int myYear, int myMonth, int myDay){
	int retVal = -1;   // Error Code Invalid Date
	int monthCounter;
	
	if ((myYear>=0) && (myMonth>0) && (myMonth<13) && (myDay>0) && (myDay<=daysInMonth(myYear,myMonth))) {
		// Valid Date
		retVal = myDay; 	// Day
			//Visit each month before the current month and add its days to our total
		
		for (monthCounter=1; monthCounter<myMonth;monthCounter++){
		
		
			retVal = retVal + daysInMonth(myYear,monthCounter);
		}
	}
	return retVal;

}

// -------------------------------------------------------------------------------------------------------------------
// Outputs and Inputs that are displayed and where values are entered in the console. 
// -------------------------------------------------------------------------------------------------------------------

int main(int argc, char** argv) {
	int i; 
	
	int mYear, mMonth, mDay;
	
	/*for (i=0;i<=13;i++) {
		cout<<"Month: "<<i<<"\t Days in Month :  "<<daysInMonth(2012,i)<<endl;			
	} */
	cout<<"Please enter the Year ?> ";
	cin>>mYear;
	cout<<"Please enter the Month ?> ";
	cin>>mMonth;
	cout<<"Please enter the Day ?> ";
	cin>>mDay;
	cout<<"\n"<<mMonth<<"/"<<mDay<<"/"<<mYear<<" is ";
	cout<<daysIntoYear(mYear, mMonth, mDay)<<" days into the year."<<endl;
	return 0;

}
	
	
	
	
	
	

