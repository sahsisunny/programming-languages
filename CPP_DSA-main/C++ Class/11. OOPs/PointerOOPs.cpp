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
    rectangle *ptr, *ptr2;
    ptr = &r1;
    ptr->length = 10;
    ptr->breath = 5;
    cout << "Area of Rectangle R1 is: " << ptr->area() << endl;
    cout << "Perimeter of Rectangle R1 is: " << ptr->perimeter() << endl;
    ptr2 = &r1;
    ptr2->length = 12;
    ptr2->breath = 7;
    cout << "Area of Rectangle R1 is: " << ptr2->area() << endl;
    cout << "Perimeter of Rectangle R1 is: " << ptr2->perimeter() << endl;
    return 0;
}