#include<iostream>
using namespace std;

void heapify(int *A, int n, int i) {

  int parent, left, right;
  parent = i;
  left   = 2 * i;
  right  = 2 * i + 1;

  //when it goes out of scope
  if(left > n || right > n) {
    cout<<"Error!"<<A[left]<<A[right]<<endl;
  }

  //when the left child is greater than the parent
  if(left < n && A[left] > A[parent]) {
      swap(A[left], A[parent]);
  }

  //when the right child is greater than the parent
  if(right < n && A[right] > A[parent]) {
      swap(A[right], A[parent]);
  }

  //when left becomes equal to n
  if(left == n && A[left] > A[parent]) {
      swap(A[left],A[parent]);
  }

}

void heapsort(int A[], int n){

  for(int i = 0; i < n; i++) {
    heapify(A, n,i);
  }

  for(int i = 0; i < n; i++) {
      heapify(A,i,0);
  }
}

int main () {

  int arr[] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
  int n = sizeof(arr)/sizeof(arr[0]);
  heapsort(arr,n);

return 0;
}
