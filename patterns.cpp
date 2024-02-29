#include <iostream>
using namespace std;

int main() {

/*int n;
  cout<<"Enter the number: "<<endl;
  cin>>n;

  int i=1;
  while(i<=n)
    {
      int j=1;
      while(j<=n){
        cout<<" * ";
        j=j+1;
      }
       cout<<endl;
      i=i+1;
    }
  */

 /*  1 2 3 
     1 2 3 
     1 2 3     print this pattern */

 /* int n;
  cin>>n;
  int i=1;
  while(i<=n){
    int j=1;
    while(j<=n){
      cout<<j;
      j=j+1;
    }
    cout<<endl;
    i=i+1;
  }*/

  /*  3 2 1 
      3 2 1 
      3 2 1     print this pattern*/

 /* int n;
  cin>>n;
  int i=1;
  while(i<=n){
    int j=1;
    while(j<=n){
      cout<<n-j+1;
      j=j+1;
      }
    cout<<endl;
    i=i+1;
  }*/

  /* 1 2 3 4 
     5 6 7 8 
     9 10 11 12
    13 14 15 16     print this pattern */

  /*int n;
  cin>>n;
  int i=1;
  int count=1;
  while(i<=n){
    int j=1;
    while(j<=n){
      cout<< count<< " ";
      count=count +1;

      j= j + 1;
    }
    cout<<endl;
    i = i + 1;
  }*/

  /* *
      * * 
      * * * 
      * * * *
      * * * * *     print this pattern */

  /*int n;
  cin>>n;
  int row =1;
  while(row<=n){

    int col=1 ;
    while(col<=row){
      cout<<"* ";
      col= col + 1;
    }
    cout<<endl;
    row = row+1;
    
  }*/

  /* 1
     2  2
     3  3  3
     4  4  4  4   print this pattern */
   /*int n ;
  cin>> n;
  int row =1;
  while(row<=n){
    int col = 1;
    while(col<=row){
        cout<<row<<" ";
      col= col + 1;
    }
    cout <<endl;
    row = row + 1;
  }*/

  /* 1
     2 3 
     4 5 6 
     7 8 9 10     print this pattern */

  int n ;
  cin>>n;
 int  row = 1;
 int count =1;
  while(row<=n)
    {
      int col= 1;
      while(col<=row){
        cout<<count<< " ";
        count = count++;
        col = col+1;
      }
        cout<< endl;
        row = row +1;
    }
  
  
    
    
  
}