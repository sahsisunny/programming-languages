#include<iostream>
using namespace std;
class Student{
        public:
        int roll;
        string name[2];
        void write(){
            cout << "Data Saved"<<endl;
        }
        void display(){
            cout << "Data Printed"<<endl;
            cout << "Roll Number: " << roll << endl;
            cout << "Full Name: " << name[0] << " " << name[1];
        }
};
int main(){
    Student s1;
    cout << "Enter the Roll Number: ";
    cin >> s1.roll;
    cout << "Enter the Name: ";
    cin >> s1.name[0];
    cin >> s1.name[1];
    s1.write();
    s1.display();
}