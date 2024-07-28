#include <iostream>
#include <cstring> 
using namespace std;
void reverse(char name[] , int n ){
  int s =0 ; 
  int e = n-1 ;
  while(s<e){
    swap (name [s++] , name[e--]);
  }
}
int main() {
  char name[20];
  cout<<"Enter the name " << endl ;
  cin>>name;

  int length = strlen(name);
   reverse(name , length);
  cout << "The reverse name is : "<<name << endl;

  
}