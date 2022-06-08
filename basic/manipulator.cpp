//a simple example of manipulator 
//as we know manipulator in c++ are setw, and endl so
#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int num1=12345, num2 =2356;
    cout<<"num1="<<setw(20)<<num1<<"\nnum2="<<setw(35)<<num2<<endl;

}