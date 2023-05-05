// Summ 1 to n
#include <iostream>
using namespace std;
int main()
{
     float n;
     cout << "Enter the number: ";
     cin >> n;
     float sum = 0;

     // Method 1
     // for (int i = 1; i <= n; i++)
     // {
     //      sum = sum + i;
     // }
     // cout << "Sum of 1 to " << n << " is : " << sum << endl;

     // Method 2
     // sum = n * (n + 1) / 2;
     // cout << "Sum of 1 to " << n << " is : " << sum << endl;

     // Method 3
     // sum = (n + 1) * (n / 2);
     // cout << "Sum of 1 to " << n << " is : " << sum << endl;

     return 0;
}