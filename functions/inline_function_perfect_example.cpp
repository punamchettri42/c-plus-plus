#include <iostream>
using namespace std;
inline int square(int a) //so here we can see this is the function and here inline is used so this is the example of inline function.
{
return a*a;
}
inline int cube(int s) //inline is used here as well //so here is double inline funciton prototype
//but here is no funciton call
/*inline function is used to save memory which becomes appreciable when a funcion is likely to be called
many times and in short inline function is the function that is extended in line when it is invoked*/
{
return s*s*s;
}
int main()
{
int a = 5;
cout << "The cube of 5 is: " << cube(5) << endl;
cout << "Square of 5 is:  " << square(a) << endl;
return 0;
}