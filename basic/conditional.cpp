#include<iostream>
using namespace std;
int main ()
{
    int small;
    int x=4,y=5;
    small =x<y ? x:y; //we can see this it is the ternary operator 
    //ternary operator can be used in c and c++ both
    cout << "smallest value =" << small << "\n";
    return 0;
}