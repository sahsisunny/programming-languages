#include <iostream>
using namespace std;
void Discount()
{
    // 12/pcs ,if u buy more then 500 rupees then discount 15%.
    float Price = 12.0;
    float quantity, discount, origPrice, DiscountPrice;
    cout << "Alert - '15%' discount on purchase more than 500/-\n";
    cout << "Quantity : ";
    cin >> quantity;
    origPrice = Price * quantity;

    if (origPrice >= 500)
    {
        discount = origPrice * 15 / 100;
        DiscountPrice = origPrice - discount;
        cout << "Original Price: " << origPrice << endl;
        cout << "Discounted Price: " << DiscountPrice << endl;
    }
    else
    {
        cout << "Obbs! No discount apply....";
        cout << "Price: " << origPrice << endl;
    }
}
int main()
{
    Discount();
    return 0;
}