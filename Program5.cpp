// Program: 5
// “Write a Program for Simple Interest and Compound Interest”
#include<iostream>
using namespace std;
int main(){
    int p,r,t;
    cout<<"Enter the amount you want to invest :";
    cin>>p;
    cout<<"Enter the interest rate :";
    cin>>r;
    cout<<"Enter the time period of investment :";
    cin>>t;
    cout<<"The simple interest is :"<<(p*r*t)/100<<endl;

return 0;
}
