#include <iostream>
using namespace std;
class rectangle
{
private:
    int length;
    int breath;

public:
    // Non-Parameterized Constructor
    rectangle()
    {
        length = 2;
        breath = 2;
    }

    // Parameterized Constructor
    rectangle(int l, int b)
    {
        setLength(l);
        setBreath(b);
    }
    void setLength(int l)
    {
        if (l >= 0)
            length = l;
        else
            length = 0;
    }
    void setBreath(int b)
    {
        if (b >= 0)
            breath = b;
        else
            breath = 0;
    }
    int getLength()
    {
        return length;
    }
    int getBreath()
    {
        return breath;
    }
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
    rectangle r;

    rectangle r1(10, 5);

    // cout << "Length of Rectangle is: " << r.getLength() << endl;
    // cout << "Breath of Rectangle is: " << r.getBreath() << endl;

    cout << "Area of Rectangle is: " << r1.area() << endl;
    cout << "Perimeter of Rectangle is: " << r1.perimeter() << endl;

    return 0;
}