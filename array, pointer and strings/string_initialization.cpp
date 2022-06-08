#include<iostream>
using namespace std;
int main()
{
    char name[]="punam adhikari";
    int i=0;
    cout<<"the name in individual character form:"<<endl;
    while(name[i]!='\0')
    {
        cout<<"  "<<name[i];
        i++;

    }
}