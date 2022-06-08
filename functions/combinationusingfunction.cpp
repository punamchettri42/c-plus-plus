//greatest number using function

#include<iostream>
using namespace std;
int great(int x, int y)
{
    if(x>y)
    return(x);
    else 
     return (y);
}
int main()
{
    int a ,b,c,d,e;
    cout<<" enter three numbers:";
    cin>>a>>b>>c;
    d=great(a,b);
    e=great(b,c);
    cout<<" the greates number is:"<<e;

}