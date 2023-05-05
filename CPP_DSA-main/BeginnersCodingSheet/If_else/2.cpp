#include <iostream>
using namespace std;
void vowelOrNot()
{
    char ch;
    cout << "Enter the character: ";
    cin >> ch;
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
        ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
    {
        cout << "'" << ch << "'"
             << " is Vowel.";
    }
    else
    {
        cout << "'" << ch << "'"
             << " is Consonent.";
    }
}
int main()
{
    vowelOrNot();
    return 0;
}