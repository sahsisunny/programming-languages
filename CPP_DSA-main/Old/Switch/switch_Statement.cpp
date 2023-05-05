#include<iostream>
using namespace std;

int main(){
  char button;
  cout<<"Input a character: ";
  cin>>button;

  switch(button)
  {
    case 'a':
      cout<<"Hello\n";
      break;
    case 'b':
      cout<<"Namaste\n";
      break;
    case 'c':
      cout<<"Salute\n";
      break;
    case 'd':
      cout<<"Hola\n";
      break;
    case 'e':
      cout<<"Ciao\n";
      break;
    default:
      cout<<"i am still learning more!!\n";
      break;
  }


  return 0;
}