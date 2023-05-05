// Conditional Statements - if else, else if, switch

#include <iostream>
using namespace std;

void ifstatement()
{
  // If else statement
  cout << "Number is even or odd" << endl;
  int number;
  cout << "Enter a number: ";
  cin >> number;
  if (number % 2 == 0)
  {
    cout << "Number is even" << endl;
  }
  else
  {
    cout << "Number is odd" << endl;
  }
}
void elseifstatement()
{
  // Else if statement
  cout << "Number is positive or negative or zero" << endl;
  int number;
  cout << "Enter a number: ";
  cin >> number;
  if (number > 0)
  {
    cout << "Number is positive" << endl;
  }
  else if (number < 0)
  {
    cout << "Number is negative" << endl;
  }
  else
  {
    cout << "Number is zero" << endl;
  }
}

void switchstatement()
{

  int number;
  cout << "1. If Statements" << endl;
  cout << "2. Else If Statements" << endl;
  cout << "3. Switch Statements" << endl;
  cout << "Enter your choice: ";
  cin >> number;
  // Switch statement
  switch (number)
  {
  case 1:
    ifstatement();
    break;
  case 2:
    elseifstatement();
    break;
  case 3:
    switchstatement();
    break;
  default:
    cout << "Invalid choice" << endl;
    break;
  }
}

int main()
{
  switchstatement();
  return 0;
}