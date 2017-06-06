/*Implementing the tower of Hanoi using the stack as array*/
#include<iostream>
#include<climits>
#define SIZE 7
using namespace std;

//declare the stack as array
int src[SIZE+1], dest[SIZE+1], aux[SIZE+1];
int srcTop, destTop, auxTop;

void print () {
  for(int ctr = 0; ctr < SIZE; ctr++)
    cout<<src[ctr];
  cout<<endl;
  for(int ctr = 0; ctr < SIZE; ctr++)
    cout<<dest[ctr];
  cout<<endl;
  for(int ctr = 0; ctr < SIZE; ctr++)
      cout<<aux[ctr];
  cout<<endl;
}

int main () {

int ind;

for(ind = 0; ind < SIZE; ind++)
  src[ind] = ind + 1;
for(ind = 0; ind < SIZE; ind++)
  aux[ind] = dest[ind] = -1;
src[SIZE] = aux[SIZE] = dest[SIZE] = INT_MAX;
//print();

srcTop = 0;
destTop = auxTop = SIZE;

while(1){
    if(src[srcTop] < dest[destTop]){
      destTop--;
      dest[destTop] = src[srcTop];
      src[srcTop] = -1;
      srcTop++;
    } else {
      srcTop--;
      src[srcTop] = dest[destTop];
      dest[destTop] = -1;
      destTop++;
    }
    if(destTop == 0)
        break;

    if(src[srcTop] < aux[auxTop]) {
      auxTop--;
      aux[auxTop] = src[srcTop];
      src[srcTop] = -1;
      srcTop++;
    } else {
      srcTop--;
      src[srcTop] = aux[auxTop];
      aux[auxTop] = -1;
      auxTop++;
    }

    if(dest[destTop] < aux[auxTop]) {
      auxTop--;
      aux[auxTop] = dest[destTop];
      dest[destTop] = -1;
      destTop++;
    } else {
      destTop--;
      dest[destTop] = aux[auxTop];
      aux[auxTop] = -1;
      auxTop++;
    }
    if(destTop == 0)
        break;
}
print();
return 0;
}
