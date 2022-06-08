//write a messagge welcome to my college in a file names welcome.txt
#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ofstream out("welcome.txt");
    out<<"welcome to my college";
    out.close();
    cout<<"file has been opened successfully.........";
    
}