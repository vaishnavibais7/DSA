#include <iostream>
using namespace std;
//selection function to sort the array
void selection(int arr[], int n){
  int i;
  int j;
  int minIndex;//minIndex to store the index of minimum element
  
  for(i = 0 ; i < n-1 ; i++ ){
    minIndex=i;
  
    for( j=i+1 ; j<n ; j++ ){
      if( arr[j] < arr[minIndex] )
        minIndex=j;
    }
    swap( arr[minIndex] , arr[i] );//swapping the elements 
  }
  
}
//void print function to print the sorted array  
void  print(int arr[], int n){
 int i;
 for (i = 0 ; i < n ; i++ ){
  cout << arr[i] << " " ;
  
}
}
int main() {
  int arr[5]={2,1,5,4,6};//Initializing an array
  int n = sizeof(arr)/sizeof(int);//finding the size of the array
  selection( arr , n );//calling the selection function
  cout<<"The sorted array is: ";//print the output
    print( arr , n );//calling print function
}