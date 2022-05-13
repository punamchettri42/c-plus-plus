/*Unions: 
A union is a type of structure that can be used where the amount of memory used is a key factor. 
Similarly to the structure, the union can contain different types of data types.
Each time a new variable is initialized from the union it overwrites the previous in C language but in C++ we also don’t need this keyword and uses that memory location.
This is most useful when the type of data being passed through functions is unknown, using a union which contains all possible data types can remedy this problem.
It is declared by using the keyword “union“.*/
// C++ program to illustrate the use
// of the unions
// C++ program to illustrate the use
// of the unions
#include <iostream>
using namespace std;

// Defining a Union
union GFG {
	int Geek1;
	char Geek2;
	float Geek3;
};

// Driver Code
int main()
{
	// Initializing Union
	union GFG G1, G2, G3;

	G1.Geek1 = 34;
	G2.Geek2 = 34;
	G3.Geek3 = 34.34;

	// Printing values
	cout << "The first value at "
		<< "the allocated memory : "
		<< G1.Geek1 << endl;

	cout << "The next value stored "
		<< "after removing the "
		<< "previous value : "
		<< G2.Geek2 << endl;

	cout << "The Final value value "
		<< "at the same allocated "
		<< "memory space : "
		<< G3.Geek3 << endl;
	return 0;
}
