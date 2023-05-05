#include<iostream>
#include<ctype.h>
using namespace std;
int main(){
    cout << "isalnum()\t" << isalnum('2') << endl;
    cout << "isalpha()\t" << isalpha('1') << endl;
    cout << "isdigit()\t" << isdigit('S') << endl;
    cout << "islower()\t" << islower('S') << endl;
    cout << "isspace()\t" << isspace('1') << endl;
    
    //Convert in ASCII
    cout << "toupper()\t" << toupper('S') << endl;
    cout << "tolower()\t" << tolower('s') << endl;

}