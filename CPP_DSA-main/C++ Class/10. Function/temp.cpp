#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    int n, m;

    cin >> n;
    cin >> m;

    string list[] = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

    for (int i = n; i < m; i++)
    {
        if (i > n)
        {
            if (n % 2 == 0)
            {
                cout << "even" << endl;
            }
            else
            {
                cout << "odd" << endl;
            }
        }
        else
        {
            cout << list[i] << endl;
        }
    }
}