#include <iostream>
using namespace std;

int main()
{
	// Defining enum Gender
	enum Gender { Male, Female };  //so this is the example of enumerated data type

	// Creating Gender type variable
	Gender gender = Male;

	switch (gender)
	{
	case Male:
		cout << "Gender is Male";
		break;
	case Female:
		cout << "Gender is Female";
		break;
	default:
		cout << "Value can be Male or Female";
	}
	return 0;
}
