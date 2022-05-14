//a program using the function overloading that converts feet to inches. Use function with no argument, one argument and two arguments. Decide yourself the types of arguments. Use pass by reference in any one of the function above.
#include <iostream>
using namespace std;
int convert(int);
int main()
{
    int ft ,inch;
    float con;
    cout<<"enter feet:";
    cin>>ft;
    inch=convert(ft);// so this is function call 
    cout<<"the converted  feet in inch :" <<inch;
    return 0;
}
int convert(int ft)
{
//   inch = i = f * 12;;
//    return inch;
return(ft * 12);
}