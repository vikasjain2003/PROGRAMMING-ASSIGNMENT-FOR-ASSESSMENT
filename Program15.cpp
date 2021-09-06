// Program: 15

// “Program for choice ‘+’, ‘-’, ‘*’, ‘/’, ‘%’ -&gt; Addition, Subtraction, Multiplication, Division, Remainder”
#include <iostream>
#include<iomanip>
using namespace std;

int main() {
  float a,b;
int i;
  cout<<"Enter the first number : ";
  cin>>fixed>>setprecision(5)>>a;
  cout<<"Enter the second number : ";
  cin>>fixed>>setprecision(5)>>b;
  cout<<"Press 1 for addition "<<endl;
  cout<<"Press 2 for Subtraction "<<endl;
  cout<<"Press 3 for Multiplication "<<endl;
  cout<<"Press 4 for division "<<endl;
  cout<<"Press 5 for remainder "<<endl;
  cin>>i;
  if(i == 1) cout<<fixed<<setprecision(5)<<a+b<<endl;
  if(i == 2) cout<<fixed<<setprecision(5)<<a-b<<endl;
  if(i == 3) cout<<fixed<<setprecision(5)<<a*b<<endl;
  if(i == 4) cout<<fixed<<setprecision(5)<<a/b<<endl;
  if(i == 5) cout<<fixed<<setprecision(5)<<(int)a%(int)b<<endl;

   return 0;
}
