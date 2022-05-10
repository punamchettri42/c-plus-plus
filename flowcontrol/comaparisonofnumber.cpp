#include<iostream>
using namespace std;
int main() 
{
  // declare variables
  double n1,n2,n3;
  
  // take input
  cout << "Enter three numbers: ";
  cin >> n1 >> n2 >> n3;
  
  // compare first and second number
  if(n1 > n2) 
  {
    // compare first and third number
    if(n1 > n3)
      cout << "Largest = " << n1 << endl;
    else
      cout << "Largest = " << n3 << endl;
  }
  else
  {
    // compare second and third number
    if(n2 > n3)
      cout << "Largest = " << n2 << endl;
    else 
      cout << "Largest = " << n3 << endl;
  }
  return 0;
}