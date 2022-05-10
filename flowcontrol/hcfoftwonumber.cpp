#include<iostream>
using namespace std;
int main()
{
  // declare two variables
  int num1, num2;

  // take inputs
  cout << "Enter Two Integers: ";
  cin >> num1 >> num2;

  // find GCD
  while( num1 != num2 )
  {
    if(num1 > num2)
       num1 -= num2 ;
    else
      num2 -= num1 ;
  }

  // display result
  cout << "GCD = "<< num1 << endl;

  return 0;
}