//a c++ program to illustrate the use of passing array to a function
#include<iostream>
#include<iomanip>
using namespace std;
 int fun(int a[]) ///here it is declaration
{
    a[0]=10;
    a[1]=20;
    a[2]=25;
    a[3]=30;
    a[4]=40;
}
int main()
{
    int nums[5]={1,2,3,4,5},i;
    cout<<"before function call, the values are:";
    for(i=0;i<5;i++)
    cout<<nums[i];
    fun(nums);
    cout<<"after function call ,the values are";
    for(i=0;i<5;i++)
    cout<<nums[i];
}