#include <iostream>
using namespace std;
string dispDay(int day)
{

    if (day == 1)
    {
        return "Monday";
    }
    else if (day == 2)
    {
        return "Tuesday";
    }
    else if (day == 3)
    {
        return "Wednesday";
    }
    else if (day == 4)
    {
        return "Thursday";
    }
    else if (day == 5)
    {
        return "Friday";
    }
    else if (day == 6)
    {
        return "Saturday";
    }
    else if (day == 7)
    {
        return "Sunday";
    }
    else
    {
        return "Please enter the valid number between 1-7";
    }
}
int main()
{
    string dayname;
    int day;
    cout << "Enter the Day numbers: ";
    cin >> day;
    dayname = dispDay(day);
    cout << dayname;
    return 0;
}