#include<iostream>
#include<cstring>
using namespace std;
int main(){
    char str1[] = {"Sunny"};
    char str2[] = {"Sunny"};
    int res = strcmp(str1,str2);
    if (res==0)
    {
        cout << "String is Same";
    }
    else
    {
        cout << "String is Not Same";
    }
    
    cout << "\nValue returned by strcmp(str1,str2) is : " <<res ;
}