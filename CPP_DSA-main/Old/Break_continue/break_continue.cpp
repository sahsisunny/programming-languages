#include<iostream>
using namespace std;

int main(){
  int pm=3000;
  for(int date=1;date<=30;date++){
    if(date%2==0){
      continue;
    }
    if (pm=0)
    {
      break;
    }
    
    cout<<"Go to today!\n";
    pm=pm-300;

  }


  return 0;
}