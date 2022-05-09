#include <iostream>
using namespace std;
class student
{
    int roll;
    float height;
public:
 void get_data() 
 {
     cout<<"enter roll and height";
     cin>>roll>>height;
 }
void show_data()
    {
        cout<<"roll="<<roll<<endl;
        cout<<"height="<<height;
    }
};
  int main()
  {
      student st;
      st.get_data();
      st.show_data();
      return 0;
  }