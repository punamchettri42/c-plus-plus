#include <iostream>
using namespace std;
float interest (int,int,float); //so here we can see this is the function prototype
int main()
{
    int p,t;
    float i,r;
    cout << "Enter principal amount, time and rate:";
    cin>>p>>t>>r;
    i=interest(p,t,r); //so this is the function call
    cout<<"\n interest="<<i;
    return 0;
}
//now we will use function declaration , in function we can see that function prototype , function call and function defination are so much important
float interest (int p,int t, float r)
{
    return((p*t*r/100));

}