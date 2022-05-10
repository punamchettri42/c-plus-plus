#include<iostream>
using namespace std;
int main()
{
  int n, i, sum=0;
  cout << "Enter the N value: ";
  cin >> n;
  for (i = 1; i <= n; i++)
  {
    sum += i; 
  }
  cout << "Sum= " << sum << endl;

  return 0;
}