#include<iostream>
using namespace std;
class Student{
    int roll, total, vb, oracle, cn, swm, stat;
    char name[20];
    float percentage;
    public:
    
void getData()
{
            cout << "Enter the Roll Number: ";
            cin >> roll;
            cout << "Enter the Name: ";
            cin >> name;
            cout << "Enter the VB.net Marks: ";
            cin >> vb;
            cout << "Enter the Oracle Marks: ";
            cin >> oracle;
            cout << "Enter the Computer Networks Marks: ";
            cin >> cn;
            cout << "Enter the SWM Marks: ";
            cin >> swm;
            cout << "Enter the Statistics Marks: ";
            cin >> stat;
}
void calculate()
    {
    total = vb + oracle + cn + swm + stat;
    percentage = total / 5;
    }
        void display(){
            cout << "Data Printed" << endl;
            cout << "Roll Number: " << roll << endl;
            cout << "Full Name: " << name << endl;
            cout << "Total Marks: " << total << endl;
            cout << "Percentage: " << percentage << "%" << endl;
        }
};

int main(){
    Student s1;
    s1.getData();
    s1.calculate();
    s1.display();
}