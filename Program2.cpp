// Program: 2
// “Write a Program for Calculate Area and Perimeter of the Circle”

#include <iostream>
// #define PI = 3.14
using namespace std;
class calculation{
  int radius;
  public:
  void setradius(void);
  void perimeter(void);
  void area(void);
};

void calculation:: setradius(void){
  cout<<"Enter the radius of Circle : ";
  cin>>radius;
  cout<<endl;
}

void calculation:: perimeter(void){
  float p = 2* 3.14 *radius;
  cout<<"The perimeter of Circle is : "<<p<<endl;
}

void calculation:: area(void){
  float a = 3.14*radius*radius;
  cout<<"The area of circle is : "<<a<<endl;
}
int main() {
  calculation c;
  c.setradius();
  c.perimeter();
  c.area();
   return 0;
}
