
//a c++ program to read numbeeeeers of students and then marks of each student entered marks and their average. use dynamic memory allocation to store memory of each student

#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int n,i;
    float *p ,sum=0, avg;
    cout<<"how many students are there:";
    cin>>n;
    cout<<"enter marks of each student:";
    p=new float[n];
    for(i=0;i<n;i++)
    {
        cin>>*(p+i);
        sum+=*(p+i);
        avg=sum/n;
        cout<<"the average marks of ";
        for(i=0;i<n;i++)
        {
            cout<<*(p+i);
            cout<<"is"<<avg;
            delete[]p;
            return 0;

        }


}



}