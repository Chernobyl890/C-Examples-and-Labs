// Exercise.cpp - Shane Irons - 9/7/2018 

#include <iostream>    
#include <string>     

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;


int main(int argc, char** argv) {
	string customerName = "" ;    // Holds Customer Name
	int customerAge = 0 ;      // Holds Customer Age
	int customerHeight = 0 ;    // Holds Customer Height
	int customerWeight = 0;     // Holds Customer Weight
	double maximumHeartRate = 0.0;    // Holds Customer Max HeartRate 
	double aerobicRate = 0.0;     // Holds Customer Aerobic Rate
	double bmi= 0.0;      // Holds Customer BMI
	cout<<"Please enter the customer's name?> ";
	getline(cin, customerName);
	cout<<"Please enter the customer's age?> ";
	cin >> customerAge;
	cout<<"Please enter customer's height?> ";
	cin>> customerHeight;
	cout<<"Please enter customer's weight?> ";
	cin>> customerWeight;

	maximumHeartRate = 220.0 - double(customerAge);
	aerobicRate = 70 + (0.7 * (maximumHeartRate - 70));
	bmi = (703.0 * double(customerWeight)) / double(customerHeight*customerHeight);
	
	cout<<"\nReport for customer : "<<customerName<<endl;  // Will display the customer's name
	cout<<"\tAge : "<<customerAge<<endl; // Will display the customer's Age 
	cout<<"\tHeight : "<<customerHeight<<" (inches)"<<endl; // Will display the customer's height
	cout<<"\tWeight : "<<customerWeight<<" (pounds)"<<endl; // Will display the customer's weight
	cout<<"\n" "\tMax. Heart Rate : "<<maximumHeartRate<<endl; // Will calculate the max heart rate from the above equation
	cout<<"\tAerobic Rate : "<<aerobicRate<<endl; // Will calculate the aerobic rate from the above equation
	cout<<"\tBMI : "<<bmi<<endl; // Will calculate the BMI from the above equation 
	
	
	return 0;
}
