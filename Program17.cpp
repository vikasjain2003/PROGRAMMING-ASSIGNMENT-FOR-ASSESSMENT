// Program: 17
// “A Program for Swapping of two numbers with and without temporary variable
#include <iostream>
using namespace std;

int main() {
  int a,b;
  cout<<"enter two integers :"<<endl;
  cin>>a>>b;
  b = a+b;
  a = b-a;
  b = b-a;
  cout<<"after swapping integer a is "<<a<<" and b is "<<b<<endl;
   return 0;
}
