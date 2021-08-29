// Program: 4
// “Write a Program for B.Tech. Mark sheet calculation (Total, Percentage and Result)”

// Program: 4
// “Write a Program for B.Tech. Mark sheet calculation (Total, Percentage and Result)”
#include <iostream>
using namespace std;

int main() {
  float CSIT101, CSIT102, CSIT103, CSIT104, CSIT105; 
  cout<<"Enter the marks of CSIT101 : ";
  cin>>CSIT101;
  cout<<"Enter the marks of CSIT102 : ";
  cin>>CSIT102;
  cout<<"Enter the marks of CSIT103 : ";
  cin>>CSIT103;
  cout<<"Enter the marks of CSIT104 : ";
  cin>>CSIT104;
  cout<<"Enter the marks of CSIT105 : ";
  cin>>CSIT105;
float total =(CSIT101 + CSIT102 + CSIT103 +CSIT104 +CSIT105);
float totalP = ((CSIT101 + CSIT102 + CSIT103 +CSIT104 +CSIT105)*100)/350;
cout<<"Hence the total marks are "<<total<<endl;
cout<<"Hence the total percentage is "<<totalP<<endl;

   return 0;
}

//Made by Vikas Jain 
