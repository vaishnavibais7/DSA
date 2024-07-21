#include <iostream>
using namespace std;

// function for selection sort
void selection(int arr[], int n) {
  int i;
  int j;
  int midIndex;
  for (i = 0; i < n - 1; i++) {
    midIndex = i;
    for (j = i + 1; j < n; j++) {
      if (arr[j] < arr[midIndex])
        midIndex = j;
    }
    swap(arr[i], arr[midIndex]);
  }
}

// function for printing the selection_sort
void printSelection(int arr[], int n) {
  int i;
  for (i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
}

int binarysearch(int arr[], int n, int key) {
  int start = 0;
  int end = n - 1;
  int mid = (start + end) / 2;
  while (start <= end) {
    mid = (start + end) / 2;
    if (arr[mid] == key) {
      return mid;
    } else if (key <= mid) {
      end = mid - 1;
    } else {
      start = mid + 1;
    }
  }
  return -1;
}

int main() {
  int arr[6] = {2, 4, 1, 5, 6, 3};
  int n = sizeof(arr) / sizeof(int);
  selection(arr, n);
  cout << "The sorted series is : ";
  printSelection(arr, n);
  cout << endl;
  cout << " Enter the element to be searched : " << endl;

  int key;
  cin >> key;
  int result = binarysearch(arr, n, key);
  cout << "The element is found at index : " << result;
}