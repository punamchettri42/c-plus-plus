//Write a c++ program with classes to represent a circle, rectangle, and triangle. Each class should have data members to represent the actual objects and member functions to read and display objects, find perimeter and area of the objects, and other useful functions. Use the classes to create objects in your program.
#include<iostream>
using namespace std;
class represent
{
    private:
    int radius;
    int l,b;
    int a; 
    int area_circle,perimeter_circle;
    int area_rectangle,perimeter_rectangle;
    int area_triangle,perimeter_triangle;
    //let us suppose equilateral triangle
    public:
    int area_and_perimenter_circle();
    int area_and_perimenter_rectangle();
    int area_and_perimenter_triangle();
};
int represent ::area_and_perimenter_circle()
{
    cout<<"enter the radius";
    cin>>radius;
    area_circle=(3.14)*radius*radius;
    perimeter_circle=(2)*(3.14)*radius;
    return area_circle;
    return perimeter_circle;


}
int represent::area_and_perimenter_rectangle()
{
    cout<<"enter the length and breadth of a rectangle:";
    cin>>l>>b;
    area_rectangle=l*b;
    perimeter_rectangle=2*(l+b);
    return area_rectangle;
    return perimeter_rectangle;

}
int represent::area_and_perimenter_triangle()
{
    cout<<"enter the length of side of the equilateral triangle";
    cin>>a;
    area_triangle=(0.433)*a*a;
    perimeter_triangle=3*a;

}
int main()
{
    represent p;
    int radius;
    int l,b;
    int a;
    int area_circle,perimeter_circle;
    int area_rectangle,perimeter_rectangle;
    int area_triangle,perimeter_triangle;
    radius=p.area_and_perimenter_circle();
    l,b=p.area_and_perimenter_rectangle();
    a=p.area_and_perimenter_triangle();
    cout<<"\nthe area and perimeter of the circle are"<<area_circle<<"\t"<<perimeter_circle;
    cout<<"\nthe area and perimeter of the rectangle are"<<area_rectangle<<"\t"<<perimeter_rectangle;
    cout<<"\nthe area and perimeter of the triangle are"<<area_triangle<<"\t"<<perimeter_triangle;
    return 0;

    

}