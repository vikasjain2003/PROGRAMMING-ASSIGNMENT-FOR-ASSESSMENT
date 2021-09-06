// Program: 18
// “A program for finding the given number is odd or even and first number is divisible by second using
// Switch Case Statement”
#include <iostream>
using namespace std;

int main() {
   int a , b;
   cout<<"Enter two numbers :"<<endl;
   cin>>a>>b;
   if(a%2 ==0) cout<< a << "is even"<<endl;
   else cout<< a<< " is odd "<<endl;
   if(b%2 ==0) cout<< b << "is even"<<endl;
   else cout<< b<< " is odd "<<endl;
   if(a>=b && a%b==0) cout<<a<<" is divisible by "<<b<<endl;
   else cout<<"no. is not divisible.";
}
