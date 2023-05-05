#include<iostream>
using namespace std;
int main(){
    int os, oracle, stat, swm, vb, marks;
    float percentage;
    cout << "Enter the Marks in  OS: ";
    cin >> os;
    cout << "Enter the Marks in Oracle ";
    cin >> oracle;
    cout << "Enter the Marks in Statistics : ";
    cin >> stat;
    cout << "Enter the Marks in Solid Waste Management: ";
    cin >> swm;
    cout << "Enter the Marks in  VB.NET: ";
    cin >> vb;
    marks = os + oracle + stat + swm + vb;
    percentage = marks/5;
    cout << "Total Marks is : " << marks<<endl;
    cout << "Percentage is: " << percentage<<"%";
}