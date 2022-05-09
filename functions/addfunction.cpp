// so this is the function for adding numbers
# include <iostream>
using namespace std;
int add (int,int); //function prototype
int add (int,int,int);
int main()
{
    int n1,n2;
    n1=add(4,5);
    n2=add(7,8,9); // functiion call ofcourse
    cout << "result =" << n1 << endl << "result2=" <<n2; //here its not end one that is end l 'L'
    return 0;

}
int add(int a,int b)
{
    return(a+b);

}
int add(int a,int b, int c)
{
    return(a+b+c);
}