// Program: 8
// “Program for Calculating area, Diagonal and Perimeter of Rectangle”
#include <iostream>
#include<iomanip>
#include<cmath>
using namespace std;

int main() {
  int l,b;
  cout<<"Enter the length of rectangle : ";
  cin>>l;
  cout<<"Enter the breadth of rectangle : ";
  cin>>b;
  cout<<"The perimeter of rectangle is : "<<2*(l+b)<<endl;
  cout<<"The area of rectangle is : "<<(l*b)<<endl;
  cout<<"The diagonal of the rectangle is : "<<sqrt(l*l + b*b)<<endl;

   return 0;
}
