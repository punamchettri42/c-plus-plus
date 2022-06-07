//write a program to illustrate the structure of c++ program with defination of class
#include<iostream>
using namespace std;
class box{
    private:
    int l,b,h;
    public:
    void ReadData ()
    {
        cout<<"enter length, breadth and height:";
        cin>>l>>b>>h;

    }
    void  display()
    {
        cout<<"volume is:"<<(l*b*h);

    }

};
int main()
{
    box ob; //here box is already a class as we know that and ob is the object

    ob.ReadData();
    ob.display();
    return 0;
}