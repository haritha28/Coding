#include<iostream>
using namespace std;

int arr[] = {9,6,5,0,3,2,7,1};
int size = sizeof(arr)/sizeof(arr[0]);

void print() {
  for(int ind = 0; ind < size; ind++)
    cout<<arr[ind]<<" ";
}

void insertionsort() {
    int key, move, pos;


    for(int index = 0; index < size ; index++) { //traversal array
      key = arr[index];
    for( pos = 0; pos < key; pos++)//loop to find the correct point to be inserted
          if(arr[index] > key)
            break;

    for(move = index; move > pos; move--)
        arr[move] = arr[move-1];
    arr[pos] = key;

    }
}

int main () {
  insertionsort();
  print();
}
