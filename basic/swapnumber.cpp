#include<iostream>
using namespace std;
int main()
{
  float num1, num2, temp;

  cout << "Enter two Number: ";
  cin >> num1 >> num2;

  //Display Numbers before Swapping
  cout << "Before Swap," << endl;
  cout << "num1 = " << num1 << endl;
  cout << "num2 = " << num2 << endl;

  //Swap num1 and num2
  temp = num1;
  num1 = num2;
  num2 = temp;

  //Display Numbers after Swapping
  cout << "\nAfter Swap," << endl;
  cout << "num1 = " << num1 << endl;
  cout << "num2 = " << num2 << endl;

  return 0;
}