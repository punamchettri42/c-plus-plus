
// C++ program to illustrate the
// traversal of string
// C++ program to illustrate functions
// of string manipulation
#include "iostream"
#include "string.h"
using namespace std;
  
// Driver Code
int main()
{
  
    // Given two string
    char str1[100] = "hellow, what's up?";
    char str2[100] = " this is punam";
  
    // To get the length of the string
    // use strlen() function
    int x = strlen(str1);
  
    cout << "Length of string " << str1
         << " is " << x << endl;
  
    cout << endl;
  
    // To compare the two string str1
    // and str2 use strcmp() function
    int result = strcmp(str1, str2);
  
    // If result is 0 then str1 and str2
    // are equals
    if (result == 0) {
        cout << "String " << str1
             << " and String " << str2
             << " are equal." << endl;
    }
    else {
  
        cout << "String " << str1
             << " and String " << str2
             << " are not equal." << endl;
    }
  
    cout << endl;
  
    cout << "String str1 before: "
         << str1 << endl;
  
    // Use strcpy() to copy character
    // from one string to another
    strcpy(str1, str2);
  
    cout << "String str1 after: "
         << str1 << endl;
  
    cout << endl;
  
    return 0;
}
/*as string is used we can find the basic string data type
strcpy(): It is used to copy characters from one string to another string.
strcat(): It is used to add the two given strings.
strlen(): It is used to find the length of the given string.
strcmp(): It is used to compare the two given string.
*/