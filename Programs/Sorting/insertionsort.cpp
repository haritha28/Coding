#include<iostream>
using namespace std;

void insertion_sort(int A[], int n) {

  int j, key;

  for(int j = 1; j < n; j++) {
    key = A[j];
    i = j - 1;
    while(i >= 0 && A[i]>key) {
      A[i+1] = A[i];
      i = i - 1;
    }
    A[i+1]= key;
  }

  for(int ind = 0; ind < n; ind++){
    cout<<A[ind]<<" ";
  }

}

int main () {

  int size;
  int arr[] = {9,6,5,0,3,2,7,1};
  size = sizeof(arr)/sizeof(arr[0]);
  insertion_sort(arr, size);

}
