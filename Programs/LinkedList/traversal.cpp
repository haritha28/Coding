#include<iostream>
using namespace std;
struct Node {
  int data;
  Node *next;
};

Node *start, *newnode, *tptr, *prev;

void addelements(int value) {

  tptr = start;
  prev = tptr;

  newnode = new Node();
  newnode->data = value;
  newnode->next = NULL;

  for(tptr = start; tptr && newnode->data > tptr->data; prev = tptr, tptr = tptr -> next);
  if(start == NULL){
    start = newnode;
  } else {
    prev->next = newnode;
    newnode->next = tptr;
  }


}

void printelements() {

  tptr = start;
  while(tptr->next != NULL) {
      cout<< tptr->data<<" " ;
      tptr = tptr->next;
  }
    cout<<tptr->data;
}

int main () {

  start = new Node();
  start = NULL;

  addelements(6);
  printelements();
  cout<<endl;
  addelements(8);
  printelements();
  cout<<endl;
  addelements(13);
  printelements();

return 0;
}
