#include<iostream>
using namespace std;
int main(){
    int choise;
    cout << "----------M E N U-----------"<<endl;
    cout << "\t1. English" << endl;
    cout << "\t2. Hindi "<< endl;
    cout << "\t3. Japanese" << endl;
    cout << "\t4. Russian" << endl;
    cout << "______________________________" << endl;
    cout << "Enter your choise: ";
    cin >> choise;
    cout << "______________________________" << endl;
    switch (choise)
    {
    case 1:
        cout << "Your choise is English" << endl;
        break;
    case 2:
        cout << "Your choise is Hindi" << endl;
        break;
    case 3:
        cout << "Your choise is Japanese" << endl;
        break;
    case 4:
        cout << "Your choise is Russian" << endl;
        break;
    default:
        break;
    }
}