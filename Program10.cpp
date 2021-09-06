// Program: 10
// “Program for input three number and find the greatest element using Simple if, Nested
// if………else, if…..else if……..if Statement
#include <iostream>
using namespace std;

int main() {
  int a,b,c;
  cout<<"Program to compare greatest between three numbers"<<endl;
  cout<<"-------------------------------"<<endl;
  cout<<"enter the three numbers : "<<endl;
  cin>>a>>b>>c;
  if(a>b && a>c) cout<<a<<" is the largest number "<<endl;
  else if(b>a && b>c) cout<<b<<" is the largest number "<<endl;
  else cout<<c<<" is the largest number "<<endl;
   return 0;
}
