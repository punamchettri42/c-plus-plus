// a  c++ program function that passes two temperatures by reference and sets the larger of the two numbers to a value entered by user by using return by reference.

#include<iostream>
using namespace std;
int temperature(int &temp1, int &temp2,int &temp)
{
if (temp1>temp2)
    temp=temp1;
if(temp2>temp1)
   temp=temp2;
return temp; //return by reference


}
// int temperature( int,int);
int main()
{
int  temp,temp1,temp2;
cout << "value of temperature one i.e temp 1 is " ;
cin>>temp1;
cout<<"value of temperature two i.e temp 2 is ";
cin>> temp2;
temperature(temp1,temp2,temp);
cout<< " the greatest amoung two temperature is  "<<temp<<endl;
return 0;
}