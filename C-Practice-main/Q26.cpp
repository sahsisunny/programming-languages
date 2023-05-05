#include<iostream>
using namespace std;
class Employee{
    public:
        int emp_id;
        string emp_name[2];
        int salary;
        void display(){
            cout << "Data Printed"<<endl;
            cout << "Employee ID: " << emp_id<< endl;
            cout << "Employee Full Name: " << emp_name[0] << " " << emp_name[1] << endl;
            cout << "Employee Salary: " << salary;
        }
};
int main(){
    Employee e1;
    cout << "Enter Employee ID: ";
    cin >> e1.emp_id;
    cout << "Enter the Employee Name: ";
    cin >> e1.emp_name[0];
    cin >> e1.emp_name[1];
    cout << "Enter Employee Salary: ";
    cin >> e1.salary;
    e1.display();
    return 0;
}