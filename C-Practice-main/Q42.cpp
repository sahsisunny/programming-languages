#include<iostream>
using namespace std;
class college{
    int roll, course;
    string name[2], dept;
    public:
    void getData(){
        cout << "Enter the Roll: ";
        cin >> roll;
        cout << "Enter the Name: ";
        cin >> name[0];
        cin >> name[1];
        cout << "Enter the Department Name: ";
        cin >> dept;
        cout << "Enter the number of Courses: ";
        cin >> course;
    }
    void Display(){
        cout << "\nRoll: " << roll;
        cout << "\nName: " << name[0] << " " << name[1];
        cout << "\nDepartment Name: " << dept;
        cout << "\nNo. of Courses: " << course;
    }
};
int main(){
    college c;
    c.getData();
    c.Display();
}