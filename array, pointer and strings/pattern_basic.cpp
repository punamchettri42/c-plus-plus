#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    char txt[]="welcome";
    int n=strlen(txt);
    for(int i=1;i<=n;i++)
    {
        cout.write(txt,i);
        cout<<endl;

    }
    return 0;
}