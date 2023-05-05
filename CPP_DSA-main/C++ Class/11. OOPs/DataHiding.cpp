#include <iostream>
using namespace std;
class rectangle
{
private:
    int length;
    int breath;

public:
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
    int l, b;

    r.setLength(10);
    r.setBreath(5);

    cout << "Length of Rectangle is: " << r.getLength() << endl;
    cout << "Breath of Rectangle is: " << r.getBreath() << endl;

    cout << "Area of Rectangle is: " << r.area() << endl;
    cout << "Perimeter of Rectangle is: " << r.perimeter() << endl;

    return 0;
}