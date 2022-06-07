//write a program that reads marks percentage in an examination of 10 students.calculate and display the average
//percentage and deviation percentage from average of each student.
#include<iostream>
using namespace std;
int main()
{
    float marks[10],avg, dev,sum=0;
    int i;
    cout<<" enter percentage of 10 students:"<<endl;
    for(i=0;i<10;i++)
    {
cout<<"the value"<<i+1;
cin>>marks[i];
sum=sum+marks[i];
    }
avg=sum/10;
cout<<" the average marks is "<<avg;
cout<<"the deviation of each student from average";
for(i=0;i<10;i++)
{
    dev=marks[i]-avg;
    cout<<"marks="<<marks[i]<<"deviation"<<dev;
    
}
}