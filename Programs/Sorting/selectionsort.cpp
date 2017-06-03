#include<iostream>
using namespace std;
//selection sort

void selection_sort(int A[], int n) {

    for(int i = 0; i < n; i++) {
      for (int j = i+1; j < n; j++) {
        if(A[i] > A[j]){
          swap(A[i],A[j]);
        }
      }
    }

}

int main () {

  int arr[] = {9,6,5,0,3,2,7,1};
  int size = sizeof(arr)/sizeof(arr[0]);
  selection_sort(arr,size);
  for(int ind = 0; ind < size; ind++) {
    cout<<arr[ind]<<" ";
  }
}
