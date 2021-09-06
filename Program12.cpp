// Program: 12
// “Write a Program to Input a Year and Check whether it is Leap Year or not”
#include <iostream>
using namespace std;

int main() {
  cout<<"Enter a year to check : ";
  int y;
  cin>>y;
  if(y%4==0 && y%100 != 0) cout<<"Leap year"<<endl;
  else if(y%400==0) cout<<"Leap year"<<endl;
  else cout<<"Not a leap year"<<endl;
   return 0;
}
