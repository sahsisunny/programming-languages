#include <iostream>
using namespace std;
class rectangle
{
public:
    int length;
    int breath;
    int area()
    {
        return length * breath;
    }
    int perimeter()
    {
        return 2 * (length + breath);
    }
};
int main()
{
    rectangle r1, r2;
    r1.length = 10;
    r1.breath = 5;
    cout << "Area of Rectangle R1 is: " << r1.area() << endl;
    cout << "Perimeter of Rectangle R1 is: " << r1.perimeter() << endl;
    r2.length = 15;
    r2.breath = 7;
    cout << "Area of Rectangle R2 is: " << r2.area() << endl;
    cout << "Perimeter of Rectangle R2 is: " << r2.perimeter() << endl;

    return 0;
}