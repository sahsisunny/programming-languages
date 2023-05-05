#include <iostream>
using namespace std;
string word(int n)
{
    string list[] = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    for (int i = 0; i < n; i++)
    {
        if (n == i + 1 && )
        {
            return list[i];
        }
    }
    return 0;
}
int main()
{
    int num;
    cin >> num;

    cout << word(num);
    return 0;
}