#include <iostream>
using namespace std ;
void insertion(int a[] , int n){
  int i;
  int j ;
  for(i=1; i<n ; i++){
     int temp = a[i];
   
    for( j=i-1 ; j>=0 ; j++) {
       //shifting
      if(a[j]> temp)
        a[j+1]=a[j];
        else {
          break;
    }
     
    }
    a[j+1]=temp;
  }
}
void print(int a[] , int n){
  for (int i =0 ; i<n ; i++){
    cout<<a[i]<<" ";
  }
}
int main() {
int a[7]={1,10,2,7,8,9,11} ; 
int n = sizeof(a)/sizeof(int);
insertion(a,n);
  cout<<"The sorted array is : ";
  print(a,n);
}