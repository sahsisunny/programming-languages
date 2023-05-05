// Example of type casting in C++

#include <iostream>
using namespace std;

int main(){
  cout << "Type casting in C++" << endl;
  cout<<"Explicit type casting"<<endl;
  int a = 10;
  float b = 10.5;
  cout << "The value of a is " << a << endl;
  cout << "The value of b is " << b << endl;
  cout << "The value of a/b is " << (float)a/b << endl;
  cout<<"Implicit type casting"<<endl;
  int c = 10;
  float d = 10.5;
  cout << "The value of c is " << c << endl;
  cout << "The value of d is " << d << endl;
  cout << "The value of c/d is " << c/d << endl;
  return 0;

}