//we have other manipulator as well like setfill(),setiosflags(),resetiosflags()
#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    float num= 70.6567;
    cout<<"num  with precision three"<<setprecision(3)<<num<<endl;
    return 0;

}