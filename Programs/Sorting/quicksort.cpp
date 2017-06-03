#include<iostream>
using namespace std;
//Implementation of quick sort

int partition(int A[], int low, int high) {

    int pivot = high;
    int pivotvalue = A[pivot];
    int pos;

    for(int ind = 0; ind <= high; ind++) {
      for(int j = 0; j <= high; j++) {
        if(A[ind] < A[j]) {
          swap(A[ind],A[j]);
        }
      }
    }

  //  cout<<pivotvalue<<endl;

    for(int i = 0; i < high; i++) {
      if(A[i] == pivotvalue) {
        pos = i;
      }
    }

    //cout<<endl<<A[pos]<<endl;
    return pos;
}


void quicksort(int A[], int low , int high) {
    int mid;
    if (low < high) {
      mid = partition(A,low,high);
      quicksort(A,low,mid-1);
      quicksort(A,mid+1,high);
    }
}


int main() {

  int arr[] = {9,6,5,0,3,2,7,1};
  int size = sizeof(arr)/sizeof(arr[0]);
  quicksort(arr, 0, size-1);

  for(int ind = 0; ind < size; ind++){
    cout<<arr[ind]<<" ";
  }

}
