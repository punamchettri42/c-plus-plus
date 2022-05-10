#include<iostream>
using namespace std;
int main()
{
  // declare variable
  double number;

  // take input
  cout << "Enter a Number : ";
  cin >> number;

  // check
  if (number > 0)
    cout << "Positive" << endl;
  else if(number < 0)
    cout << "Negative" << endl;
  else
    cout << "Zero" << endl;
    
  return 0;
}