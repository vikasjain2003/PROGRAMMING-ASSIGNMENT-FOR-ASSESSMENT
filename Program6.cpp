// Program: 6
// “Write a Program for Convert Temperature from Celsius to Fahrenheit and Fahrenheit to
// Celsius”
#include<iostream>
using namespace std;
int main(){
    float c,f;
    cout<<"Enter the temperature in celcius : ";
    cin>>c;
    float F = (1.8*c)+32 ;
    cout<<"Temperature in Farenheit is : "<<F<<endl;

    cout<<"Enter the temperature in Farenheit : ";
    cin>>f;
    float C = (F-32)/1.8 ;
    cout<<"Temperature in Farenheit is : "<<C<<endl;
return 0;
}
