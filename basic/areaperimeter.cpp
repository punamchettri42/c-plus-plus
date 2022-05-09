#include<iostream>
using namespace std;
 int main()
 {
    float l,b,a,p; //obvioulsy this is  declaring
    cout << "enter length of rectangle:";
    cin >>l;
    cout << "\n enter breadth of rectangle:";
    cin >>b;
    a = l*b;
    p= 2*(l+b);
    cout << "\n area: " <<a;
    cout << "\n perimeter:" <<p;
    return 0;
 }