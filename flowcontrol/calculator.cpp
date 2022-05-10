// C++ Program to create a Simple Calculator
// Using switch-case statement
#include<iostream>
using namespace std;
int main()
{
  // declare variables
  char c;
  float num1, num2;

  // take input for operator
  cout << "Enter an Operator (+, -, *, /): ";
  cin >> c;

  // take numbers input
  cout << "Enter two Numbers:";
  cin >> num1 >> num2;

  switch(c)
  {
    case '+':
          cout << num1 << " + " << num2 << " = " << num1+num2 << endl;
          break;
    case '-':
          cout << num1 << " - " << num2 << " = " << num1-num2 << endl;
          break;
    case '*':
          cout << num1 << " * " << num2 << " = " << num1*num2 << endl;
          break;
    case '/':
          cout << num1 << " / " << num2 << " = " << num1/num2 << endl;
          break;
    default:
         cout << "Error! Invalid Operator" << endl;
  }

  return 0;
}