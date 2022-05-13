/* A pointer is a variable whose value is the address of another variable. 
Like any variable or constant, you must declare a pointer before you can work with it.
The general form of a pointer variable declaration is −

  type *var-name;
 int    *ip;    // pointer to an integer
 double *dp;    // pointer to a double
 float  *fp;    // pointer to a float
 char   *ch     // pointer to character
now using pointer in c++ */
#include <iostream>

using namespace std;

int main () {
   int  var = 20;   // actual variable declaration.
   int  *ip;        // pointer variable 

   ip = &var;       // store address of var in pointer variable

   cout << "Value of var variable: ";
   cout << var << endl;

   // print the address stored in ip pointer variable
   cout << "Address stored in ip variable: ";
   cout << ip << endl;

   // access the value at the address available in pointer
   cout << "Value of *ip variable: ";
   cout << *ip << endl;

   return 0;
}