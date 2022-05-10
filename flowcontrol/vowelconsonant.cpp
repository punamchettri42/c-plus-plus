#include<iostream>
using namespace std;
int main()
{
  // declare variables
  char ch;
  int uppercase, lowercase;

  // take input
  cout << "Enter a Character: ";
  cin >> ch;

  // evaluates to 1(true) if ch is a uppercase Vowel
  uppercase = (ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U');

  // evaluates to 1(true) if ch is a lowercase Vowel
  lowercase = (ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u');

  // evaluates to 1(true) if either uppercase or lowercase is true
  if(uppercase || lowercase)
    cout << ch << " is Vowel." << endl;
  else
    cout << ch << " is Consonant." << endl;

  return 0;
}