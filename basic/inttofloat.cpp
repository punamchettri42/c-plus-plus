#include<iostream>
using namespace std;
int main()
{
    int num =123;
    float f1,f2,f3;
    f1=num/12;
    f2=float(num)/12;
    f3=((float)num)/12;
    cout<<" without casting ,value"<<f1;
    cout<<"with casting functional notation "<<f2;
    cout<<"with casting in c like notatiion"<<f3;
    return 0;
}