//Insertion into a Binary Search Tree
#include<iostream>
using namespace std;
int arr[] = {50,20,70,10,30,60,80,5,15,25,35,55,65,75,85};
struct BST {
  int data;
  BST *left;
  BST *right;
};

BST *prev, *newnode, *tptr, *root;

void createNode(int value){
  newnode = new BST();
  newnode->data = value;
  newnode->left = NULL;
  newnode->right = NULL;
}
void addNode(int inp){
  createNode(inp);
  if(root == NULL) {
    root = newnode;
  } else {
    for(tptr = root; tptr; prev = tptr, tptr = newnode->data > tptr->data ? tptr->right : tptr->left);
    if(newnode->data > prev->data){
      prev->right = newnode;
    } else {
      prev->left = newnode;
    }
  }
}
void preorder(BST *current) {
  if(current){
    cout<<current->data<<" ";
    preorder(current->left);
    preorder(current->right);
  }
//cout<<endl;
}
void inorder(BST *current) {
  if(current){
    inorder(current->left);
    cout<<current->data<<" ";
    inorder(current->right);
  }
  //cout<<endl;
}
void postorder(BST *current) {
  if(current){
    postorder(current->left);
    postorder(current->right);
    cout<<current->data<<" ";
  }
//cout<<endl;
}
int main () {
  for(int ind = 0; ind < sizeof(arr)/sizeof(arr[0]); ind++)
      addNode(arr[ind]);
  inorder(root);
return 0;
}
