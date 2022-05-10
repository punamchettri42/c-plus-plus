#include<iostream>
using namespace std;
void check(double);// function declaration

// main function
int main()
{

  double number;
  cout << "Enter a Number : ";
  cin >> number;

  // check number
  check(number);//function call
  
  return 0;
}

// function to check number 
void check(double number) 
{
  if (number > 0)
    cout << "Positive" << endl;
  else if(number < 0)
    cout << "Negative" << endl;
  else
    cout << "Zero" << endl;
}