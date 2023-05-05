#include<iostream>
using namespace std;

int main(){
  char button;
  cout<<"Input a character: ";
  cin>>button;

  if (button=='a'){
    cout<<"Hello\n";
  } else if(button=='b'){
    cout<<"Namaste\n";
  }else if(button=='c'){
    cout<<"Salute\n";
  }else if(button=='d'){
    cout<<"Hola\n";
  }else if(button=='e'){
    cout<<"Ciao\n";
  }


  return 0;
}