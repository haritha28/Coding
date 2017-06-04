/*Implementing the tower of Hanoi using the stack as array*/
#include<iostream>
#define SIZE 7
using namespace std;

int main () {
  //declare the source, destination and the auxillary
  int src[SIZE+1], dest[SIZE+1], aux[SIZE+1];
  int srcTop, destTop, auxTop;
  //set last values to MAX
  dest[SIZE] = aux[SIZE] = INT_MAX;
  int ind;
  //intialise the source with 1 - 7 values
  for(ind = 0; ind < SIZE; ind++) {
    src[ind] = ind + 1;
  }
  //intialise the dst and aux to -1
  for(ind = 0; ind < SIZE; ind++){
    aux[ind] = dest[ind] =  -1;
  }

  while(1) {
    //S <-> D movement
    if(src[srcTop] < dest[destTop]) {
      destTop--;
      dest[destTop] = src[srcTop];
      src[srcTop] = -1;
      srcTop++;
    } else {
      srcTop--;
      src[srcTop]= dest[destTop];
      dest[destTop];
      destTop++;
    }
    if(destTop == 0)
      break;
    //S<->A movement
    if(src[srcTop] < aux[auxTop]) {
      auxTop--;
      aux[auxTop] = src[srcTop];
      src[srcTop] = -1;
      srcTop++;
    } else {
      srcTop--;
      src[srcTop]= aux[auxTop];
      aux[auxTop]= -1;
      auxTop++;
    }
    //D<->A movement
    if(aux[auxTop] < dest[destTop]){
      destTop--;
      dest[destTop] = aux[auxTop];
      aux[auxTop] = -1;
      auxTop++;
    } else {
      auxTop--;
      aux[auxTop] = dest[destTop];
      dest[destTop] = -1;
      destTop++;
    }
    if(desTop == 0 )
      break;


  }






}
