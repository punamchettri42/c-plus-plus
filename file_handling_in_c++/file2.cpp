//write a program to read name ,roll no and marks in five subject fo a student to store inforamtion ina a file 
//named marks.txt
#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    char name[30];
    int rollNo,phy ,chem,math,nepali,bio;
    ofstream wr("marks.txt");
    cout<<"enter name of student";
    cin>>name;
    cout<<"enter roll no of students";
    cin>>rollNo;
    cout<<"enter marks in five subjects in order:";
    cout<<"physics ,chemistry,math,nepali,bio";
    cin>>phy>>chem>>math>>nepali>>bio;
    cout<<"writting to a file---------------------------";
    wr<<name<<endl<<rollNo<<endl;
    wr<<phy<<endl<<chem<<endl<<math<<endl<<nepali<<endl<<bio;
    wr.close();
    return 0;

}