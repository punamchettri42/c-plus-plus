/*create a c++ program assuming you want to create the number is prime or not.write a program that asks for number repeaditly
when it finishes checking the program ask if user wanted to do another calculation.the response can be 'y' or n'
don't forget to use the object oriented concept*/
#include<iostream> //in c++ .h header file is drop out
using namespace std;

class check_prime
{
  private:
  int i,number;
  int check;
  char choice;

  public:
  int getdata();
  int checkprimeornot();
  char checktocheckmorenumber();

};
int check_prime::getdata()
{
  cout<<" Enter a Number to check prime or not:";
  cin>>number;
  return number;
}

int check_prime::checkprimeornot()
{
  
int i, check=0;
char choice;
  for(i=2; i<number; i++)
    {
     if(number%i==0)
       {
        check++;
       return check;
        }
    }
    return check;
}
char check_prime::checktocheckmorenumber()
{
  char choice;
while(true)
{
  cout<<"Would you like to perform other calculations?(Y/N)"<<endl;
  cin >> choice;

  if(choice == 'Y'|| choice =='y')
  {
    continue; // instead of returning, skip to the next iteration
    // and ask again
        }
        else if(choice =='N'||choice =='n')
        {
            break; // return could be used here to break the while loop and 
            // terminate the program. But be explicit and use a statement specifically  
            // made for breaking out of loops
        }
    }
}


int main () // every program should have at least one main function
{
check_prime p;
int number;
int check = 0;
char choice;
number = p.getdata();
check = p.checkprimeornot();
choice =p.checktocheckmorenumber();
if ( check==0)

  cout<<"It is a prime number";
else
  cout<<"\n  It  is  not a prime number " << endl;
  return 0; //it is used for the sucessful termination of program with zero error


}
