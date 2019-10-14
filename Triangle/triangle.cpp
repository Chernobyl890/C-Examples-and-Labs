// ----------------------------------------------------------------------------------------------
// Shane Irons - Saint Leo University - 27 August 2018
//
// Triangle.cpp -- This program computes the area of a triangle
// ----------------------------------------------------------------------------------------------
#include <iostream>
using namespace std;

int main(int argc, char** argv) {
	double Base; 
	double Height;
	double Area; 
	
	cout<<"Please enter the length of the base of the triangle?"<<endl;
	cin>>Base; 
	
	cout<<"Please enter the height of the triangle?"<<endl;
	cin>>Height;
	
	Area = Base * Height / 2.0;
	cout<<"Area of the Triangle is "<<Area<<endl;
	
	
	return 0;
}
