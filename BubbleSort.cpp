#include <iostream>
using namespace std;
void bubblesort(int a[], int n) {
  int i;
  int j;
  for (i = 1; i < n; i++) {
    for (j = 0; j < n - i; j++) {
      if (a[j] > a[j + 1]) {
        swap(a[j], a[j + 1]);
      }
    }
  }
}
void print(int a[], int n) {
  int i;
  for (i = 0; i < n; i++) {
    cout << a[i] << " ";
  }
}

int main() {

  cout << "Enter the no. of elements to be sort ";
  int n;
  cin >> n;
  cout << " Enter the numbers  : " << endl;
  int a[n];
  int b;
  for (b = 0; b < n; b++) {
    cin >> a[b];
  }
  bubblesort(a, n);
  cout << "The Sorted Array is : ";
  print(a, n);
}
