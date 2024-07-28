#include <iostream>
using namespace std;
int getlength(char name[20]){
  int count = 0 ;
  for (int i =0 ; name[i] != '\0'; i++){
    count ++;
  }
  return count ;
}

int main() {
  char name[20];
  cout<<"Enter your name " << endl ;
  cin>>name;
  cout<<"Your name is " << name << endl;
  cout<<"length"<<getlength(name)<< endl ;
  return 0 ;
}