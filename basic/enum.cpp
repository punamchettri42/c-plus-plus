#include<iostream>
using namespace std;
int main()
{
    enum Color
    {
        RED,GREEN,BLUE,WHITE
    };
    Color c; 
    c=BLUE;
    cout<<"your colour code is"<<c;
    return 0;
    
}