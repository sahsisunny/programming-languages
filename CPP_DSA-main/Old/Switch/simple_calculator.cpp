#include<iostream>
using namespace std;

int main(){
  int n1,n2;
  cout<<"Enter 1st Number: ";
  cin>>n1;
  cout<<"Enter 2nd Number: ";
  cin>>n2;
  char opration;
  cout<<"Enter the Symbol(+,-,*,/,%): ";
  cin>>opration;
  switch (opration)
  {
  case '+':
    cout<<n1+n2;
    break;
  case '-':
    cout<<n1-n2;
    break;
  case '*':
    cout<<n1*n2;
    break;
  case '/':
    cout<<n1/n2;
    break;
  case '%':
    cout<<n1%n2;
    break;
  
  default:
    cout<<"Enter the Valid symbol pls..\n";
    break;
  }

  


  return 0;
}