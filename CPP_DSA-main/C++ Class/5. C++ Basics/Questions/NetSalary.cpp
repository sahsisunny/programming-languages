#include<iostream>
using namespace std;
void netSalary(){
    float netSal, BasicSal, allowences, deductions;
    cout<<"Enter the Basic Salary: ";
    cin>>BasicSal;
    cout<<"Enter the '%' of Allowences: ";
    cin>>allowences;
    cout<<"Enter the '%' of Deductions: ";
    cin>>deductions;
    netSal=BasicSal+BasicSal*allowences/100-BasicSal*deductions/100;
    cout<<"Net Salary is: "<<netSal;
}
int main(){
    netSalary();
    return 0;
}