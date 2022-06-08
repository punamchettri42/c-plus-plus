//write a program to read the entire content of file .use object of ifstream class to detect the end of file
#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    int data;
    ifstream fin;
    fin.open("marks.txt");
    fin>>data;
    while(fin)
    {
        cout<<data<<endl;
        fin>>data;

    }
    fin.close();
    return 0;
}