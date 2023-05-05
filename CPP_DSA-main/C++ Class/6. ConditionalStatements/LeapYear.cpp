#include <iostream>
using namespace std;
void LeapYear()
{
    int year;
    cout << "Enter the year: ";
    cin >> year;
    if (year % 400 == 0)
    {
        cout << year << " is Leap Year.";
    }
    else if (year % 100 == 0)
    {
        cout << year << " is not Leap Year.";
    }
    else if (year % 4 == 0)
    {
        cout << year << " is Leap Year.";
    }
    else
    {
        cout << year << " is not Leap Year.";
    }
}
int main()
{
    LeapYear();
    return 0;
}