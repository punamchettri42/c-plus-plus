/*a program to set a structure to hold a date (mm,dd and yy),
 assign values to the members of the structure and print out the values in the format 11/28/2004 by
  function. Pass the structure to the function */

#include<iostream>
using namespace std;
struct date
{
int year;    /*current year */
int day;    /* day of the month */
int mon;    /* month (1=Jan) */
};

void display(date);  //function declaration
int main()
{
    date d;
    cout<<"enter month:";
    cin>>d.mon;
    cout<<"enter day";
    cin>>d.day;
    cout<<"enter year";
    cin>>d.year;
    display(d); //so this is function call 
}

void display(date d)  //with argument no need of using semi colon
{
    cout << "\nDisplaying Information." << endl;
    cout << "month: " << d.mon << endl;
    cout <<"day: " << d.day << endl;
    cout << "year: " << d.year<<endl;
    //now displaying date in format of 11/28/2004
    cout << "the date is: " << d.mon << "/" << d.day << "/" << d.year << "\n";
   }

