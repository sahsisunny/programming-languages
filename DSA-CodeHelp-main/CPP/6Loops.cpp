// Loops in C++
#include <iostream>
using namespace std;

void forloop()
{
  // For loop
  cout << "For loop" << endl;
  for (int i = 0; i < 10; i++)
  {
    cout << i << endl;
  }
}

void whileloop()
{
  // While loop
  cout << "While loop" << endl;
  int i = 0;
  while (i < 10)
  {
    cout << i << endl;
    i++;
  }
}

void dowhileloop()
{
  // Do while loop
  cout << "Do while loop" << endl;
  int i = 0;
  do
  {
    cout << i << endl;
    i++;
  } while (i < 10);
}

int main()
{
  int number;
  cout << "1. For loop" << endl;
  cout << "2. While loop" << endl;
  cout << "3. Do while loop" << endl;
  cout << "Enter your choice: ";
  cin >> number;
  switch (number)
  {
  case 1:
    forloop();
    break;
  case 2:
    whileloop();
    break;
  case 3:
    dowhileloop();
    break;
  default:
    cout << "Invalid choice" << endl;
    break;
  }
  return 0;
}
