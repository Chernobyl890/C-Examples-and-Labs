#include<iostream>
using namespace std;

int main(int argc, char **argv) {
  int Year = 2020;
  int Day = 22;
  int Month = 9;
  int mappedYear = Year % 100;
  int intArray[] = {0, 1, 4, 4, 0, 2, 5, 0, 3, 6, 1, 4, 6};
  const char* Stringday[] = {"Saturday", "Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "F\
riday"};

  if (Year >= 2000){
    mappedYear-=1; }
  if (Year <= 1800) {
    mappedYear+=2; }

  mappedYear = (mappedYear / 4) + mappedYear;
  mappedYear += intArray[Month];

  if (Year % 100 == 0) {
    if (Year % 400 == 0 && Month == 1 || Month == 2) {
      cout << Year + " was a leap year!" << endl;
      mappedYear -= 1;
    } else {
      mappedYear += 1;
    }
  } else if ((Year % 100) % 4 == 0 ){
    if (Month == 1 || Month == 2 ){
      mappedYear -=1;
    } else {
      mappedYear +=1;
    }
  } else {
    cout << Year + " was not a leap year!" << endl;
  }

  mappedYear += Day;
  mappedYear = mappedYear % 7;

  string monthDay = (Stringday[(((((mappedYear / 4) + mappedYear)) + intArray[Month]) + Day) % 7]);

  cout << mappedYear << endl;
  cout << monthDay << endl;;

}
