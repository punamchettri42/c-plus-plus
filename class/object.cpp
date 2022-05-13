/* oop enscapsulateda data and function into a single unit or package called calss
class has the property of data hiding
data component of calss are called data memebers and function components are called as member functioin
it is also called as user defined data typs
access specifiers are used to set the atrributs of the varaibles and functions. */
/*
and now talking about object , it is the instace of class creating of an object is like defining a variable
of a data type. */
#include<iostream>
using namespace std;
class rectangle
{
    private:
    int l,b;
    public:
    void set_data(int x, int y)
    {
        l=x;
        b=y;
    }
    void show_data()
    {
        cout<<"l="<<l;
        cout<<"b="<<b;
    }
    int find_area()
    {
        return l*b;
    }
}; // so here it ends the class

int main()
{
    rectangle r;
    r.set_data(4,2);
    r.show_data();
    cout<<"area:"<<r.find_area();
    return 0; // as there is always main then there must be return as well.
}
