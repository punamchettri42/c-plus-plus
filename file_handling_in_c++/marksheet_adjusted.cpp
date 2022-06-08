//here we will print the best marksheet
#include<iostream>
#include<fstream>
#include<iomanip>
using namespace std;
int main()
{
    char name[70];
    int rollno,phy,chem,math,nepali,bio,total;
    float per;
    ifstream rd("markss.txt");
    cout<<" reading data from the file..................";
    rd>>name>>rollno;
    rd>>phy>>chem>>math>>nepali>>bio>>total;
    cout<<"**********************************************"<<endl;
    cout<< "                  MARKSHEET                   "<<endl;
    cout<<"name:"<<name;
    cin>>name;
    cout<<"rollno:";
    cin>>rollno;
    cout<<setw(12)<<"subject"<<setw(8)<<"rollno";
    cout <<" ----------------------         ------------";

}

