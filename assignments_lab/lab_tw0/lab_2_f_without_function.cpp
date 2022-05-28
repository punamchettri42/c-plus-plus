/*Write a program that displays the current monthly salary of chief executive officer, information officer, and system analyst, programmer that has been increased by 9, 10, 12, and 12 percentages respectively in year 2010. Let us assume that the salaries in year 2009 are

Chief executive officer Rs. 35000/m

Information officer Rs. 25000/m

System analyst Rs. 24000/m

Programmer Rs. 18000/m

*/
#include<iostream>
using namespace std;
int main()
{
    int ceo, io,sa, programmer;
    cout<< "the monthly salary of the ceo, information officer ,system analyst and programmer in the year of 2009 is";
    cout<< "\nChief executive officer Rs. 35000/m  Information officer Rs. 25000/m System analyst Rs. 24000/m  Programmer Rs. 18000/m";
    cout<< " \n the salary after increment of 9,10,12 and 12 percentage now in 2022 is";
    ceo = 35000+0.09*35000;
    io=25000+0.01*25000;
    sa=24000+0.12*24000;
    programmer=18000+ 0.12*18000;
    cout<<" \nthe salary of ceo now is :" <<ceo;
    cout<<"\nthe salary of  inforamtiion offincer now is:"<<io;
    cout<<"\nthe salary of system analyst now is:"<<sa;
    cout<<"\nthe salary of programmer now is:"<<programmer;
    return 0;
}

    
    
