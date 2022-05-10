// C++ program to Check Leap year
#include<iostream>
using namespace std;
int main()
{
  int year;
  cout << "Enter Year: ";
  cin >> year;
  if ( (year % 4 == 0) && ((year % 400 == 0) || (year % 100 != 0)) )  // condition for leap year
    cout << year << " is a Leap Year." << endl;
  else
    cout << year << " is not Leap Year" << endl;

  return 0;
}