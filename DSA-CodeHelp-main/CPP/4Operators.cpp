// Operators in C++
#include <iostream>
using namespace std;
int main()
{
  // Arithmetic Operators
  int a = 10;
  int b = 5;
  cout << "The value of a + b is " << a + b << endl;
  cout << "The value of a - b is " << a - b << endl;
  cout << "The value of a * b is " << a * b << endl;
  cout << "The value of a / b is " << a / b << endl;
  cout << "The value of a % b is " << a % b << endl;
  cout << "The value of a++ is " << a++ << endl;
  cout << "The value of a-- is " << a-- << endl;
  cout << "The value of ++a is " << ++a << endl;
  cout << "The value of --a is " << --a << endl;
  // Relational Operators
  cout << "The value of a == b is " << (a == b) << endl;
  cout << "The value of a != b is " << (a != b) << endl;
  cout << "The value of a >= b is " << (a >= b) << endl;
  cout << "The value of a <= b is " << (a <= b) << endl;
  cout << "The value of a > b is " << (a > b) << endl;
  cout << "The value of a < b is " << (a < b) << endl;
  // Logical Operators
  int f = 1;
  int g = 0;
  cout << "The value of f && g is " << (f && g) << endl;
  cout << "The value of f || g is " << (f || g) << endl;
  cout << "The value of !f is " << (!f) << endl;
  cout << "The value of !g is " << (!g) << endl;
  // Bitwise Operators
  cout << "The value of 0&1 is " << (0 & 1) << endl;
  cout << "The value of 0|1 is " << (0 | 1) << endl;
  cout << "The value of 0^1 is " << (0 ^ 1) << endl;
  cout << "The value of ~0 is " << (~0) << endl;
  cout << "The value of 1<<1 is " << (1 << 1) << endl;
  cout << "The value of 1>>1 is " << (1 >> 1) << endl;
  // Assignment Operators
  int c = 34;
  // int c += 2;
  // int c -= 2;
  // int c *= 2;
  // int c /= 2;
  // int c %= 2;
  cout << "The value of c is " << c << endl;
  return 0;
}

