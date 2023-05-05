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
    cout << "---------------------------------------------";
    cout << "Total Marks is : " << marks<<endl;
    cout << "Percentage is: " << percentage<<"%"<<endl;
    cout << "Grade: ";
    if (percentage>=90 || percentage<=100){
        cout << "Outstanding"<<endl;
    }else if (percentage>=80 || percentage<90)
    {
        cout << "Excellent"<<endl;
    }else if (percentage>=70 || percentage<80)
    {
        cout << "Very Good"<<endl;
    }else if (percentage>=60 || percentage<70)
    {
        cout << "Good"<<endl;
    }
    else if (percentage>=50 || percentage<60)
    {
        cout << "Fair"<<endl;
    }
    else if (percentage>=40 || percentage<50)
    {
       cout << "Below Average"<<endl;
    }
    else if (percentage>=30 || percentage<40)
    {
        cout << "Pass"<<endl;
    }
    else
    {
        cout << "Fail"<<endl;
    }
}