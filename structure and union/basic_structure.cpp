// C++ program to demonstrate the making of structure
#include <iostream>
using namespace std;
// Define structure
struct punam {
	int a1;
	char b2;
	float c3;
};

// Driver Code
int main()
{
	// Declaring a Structure
	struct punam Geek;
	Geek.a1 = 85;
	Geek.b2 = 'G';
	Geek.c3 = 989.45;
	cout << "The value is : "
		<< Geek.a1 << endl;
	cout << "The value is : "
		<< Geek.b2 << endl;
	cout << "The value is : "
		<< Geek.c3 << endl;

	return 0;
}
