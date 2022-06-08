#include<iostream>
using namespace std;
int main()
{
    int v=10, *p;
    p=&v;
    cout<<"adress of v="<<&v;
    cout<<"adresss of v using pointer="<<p;
    cout<<"value of v="<<v;
    cout<<"value of v using pointer ="<<*p;
    cout<<"adress of p="<<&p;
}