/* create a class called classpark that has int data member for car/id,of int data member for charge/hour, and float data member for the parked time. Make functions to set data members and show the charges and parked hours of the corresponding car id. Make functions for setting and showing the data members. Member function should be called from other functions. */
#include<iostream>
using namespace std;
class classpark
{
    private:
    int carid;
    int charge_per_hour;
    float parked_time;
    public:
    int get_data();
    int showcharges();
    float parkedhour();
};
 int classpark::get_data()
{
    cout<<"Enter the id of the car:";
    cin>>carid;
    return carid;
}
 int classpark::showcharges()
 {
  float hour;
  cout<<"enter the hour that car runs daily";
  cin>>hour;
  charge_per_hour=(99)*hour ;//let us suppose that cost is rs 99 per hour

 }
 float classpark :: parkedhour()
 {
   
     cout<<"enter the hour when car is parked";
     cin>>parked_time;
     return parked_time;
 }
int main()
{
    classpark p;
    int carid;
    float hour;
    int charge_per_hour;
    float parked_time;
    carid =p.get_data();
    charge_per_hour=p.showcharges();
    parked_time=p.parkedhour();
    cout<<"the hour when car is parked is"<<hour;
    cout<<"the charge per hour for the car is"<<charge_per_hour;
    cout<<"the id of the car is "<<carid;
 
    return 0;
  

}
