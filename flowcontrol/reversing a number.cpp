#include<iostream>
using namespace std;
int main()
{
  int number, remainder, sum=0;
  cout << "Enter a Positive Integer : ";
  cin >> number;
  while( number != 0 )
  {
     remainder = number % 10;
     sum = (sum*10) + remainder;
     number /= 10;
  }
  cout << "Reverse = " << sum << endl;
  return 0;
}