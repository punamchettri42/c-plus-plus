// Assume that employee will have to pay 10 percent income tax to the government. Ask user to enter the employee salary. Use inline function to display the net payment to the employee by the company.


#include<iostream>
using namespace std;
inline int salary( int sal,int salary_after_tax)
{
  salary_after_tax= (sal-0.01*sal);
  return salary_after_tax;
//   cout<< "the salary after deduction of 10% tax  as the net payment by the company is:"<< salary_after_tax<<endl;

}

int main()
{
    int sal,salary_after_tax;
    cout<<"enter your salary:";
    cin>>sal;
    salary(sal,salary_after_tax);
    cout<< "the salary after deduction of 10% tax  as the net payment by the company is:"<<salary_after_tax<<endl;
    return 0;
}

