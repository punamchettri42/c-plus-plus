#include<iostream>
#define PI 3.14
using namespace std;
int main()
{
  float radius, area;

  cout << "Enter radius of circle: ";
  cin >> radius;

  area = PI*radius*radius;
  cout << "Area = " << area << endl;

  return 0;
}