#include<iostream>
using namespace std;
class details{
    int roll;
    string name[2];
    public:
    void getData(){
        cout << "Enter the Roll: ";
        cin >> roll;
        cout << "Enter the Name: ";
        cin >> name[0];
        cin >> name[1];
    }
    void Display(){
        cout << "\nRoll: " << roll;
        cout << "\nName: " << name[0] << " " << name[1];
    }     
};
class mark:public details{
    int vb, oracle, cn, swm, stat,marks;
    public:
    void getmarks(){
    cout << "Enter the Marks in  CN: ";
    cin >> cn;
    cout << "Enter the Marks in Oracle ";
    cin >> oracle;
    cout << "Enter the Marks in Statistics : ";
    cin >> stat;
    cout << "Enter the Marks in Solid Waste Management: ";
    cin >> swm;
    cout << "Enter the Marks in  VB.NET: ";
    cin >> vb;
    }
    void calculation(){
        marks = cn + oracle + stat + swm + vb;
        cout << "\nTotal Marks is : " << marks<<endl;
    }
};
int main(){
    mark r;
    r.getData();
    r.getmarks();
    r.Display();
    r.calculation();
    return 0;
}