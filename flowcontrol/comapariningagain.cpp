#include<iostream>
using namespace std;
int main()
{
  // declare variables
  int x, y, z;
  
  // take inputs
  cout << "Enter Three Numbers: ";
  cin >> x >> y >> z;

  // when x is largest
  if ( x >= y && x >= z )
  cout << x <<" is largest Number." << endl;

  // when Y is largest
  if ( y >= x && y >= z )
  cout << y << " is largest number." << endl;

  // when z is largest
  if ( z >= x && z >= y )
  cout << z << " is largest number." << endl;

  return 0;
}