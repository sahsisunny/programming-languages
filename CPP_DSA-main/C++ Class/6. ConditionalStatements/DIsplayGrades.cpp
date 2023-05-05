#include<iostream>
using namespace std;
void DispGrades(){
    float phy,che,math,avg,total;
    cout<<"Enter the Physics marks: ";
    cin>>phy;
    cout<<"Enter the Chemistry marks: ";
    cin>>che;
    cout<<"Enter the Math marks: ";
    cin>>math;
    total=phy+che+math;
    avg=total/3.0;
    cout<<"Total marks is: "<<total<<endl;
    if(avg>60){
        cout<<"Grade A";
    }else if(avg>35 && avg<60){
        cout<<"Grade B";
    }else if(avg<35){
        cout<<"Grade C";
    }else{
        cout<<"Enter the Valid marks please!!";
    }
}
int main(){
    DispGrades();
    return 0;
}