#include<iostream>
using namespace std;
class student{
    int roll;
    string name[2];

public:
    void getData(){
        cout << "Enter the Roll Number: ";
        cin >> roll;
        cout << "Enter the Name: ";
        cin >> name[0];
        cin >> name[1];
    }
    void putData(){
        cout << "Roll Number: " << roll;
        cout << "\nName: " << name[0]<<" "<<name[1];
    }
};
int main(){
    student s;
    s.getData();
    s.putData();
    return 0;
}