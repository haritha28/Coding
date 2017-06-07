#include<iostream>
using namespace std;
int arr[] = {50,20,70,10,30,60,80,5,15,25,35,55,65,75,85};
struct BST {
  int value;
  BST *left, *right;
}

BST *newnode, *root, *tptr;

//function to add nodes to the tree
void addNode (int inp) {
  newnode = new BST();
  newnode->value = inp;
  newnode->left = newnode->right = NULL;

  if(root = NULL)
    root = newnode;
  else {
    for(tptr = root; tptr ; prev = tptr, tptr = newnode->value > prev->value? tptr->right : tptr->left);
    if(newnode->data > prev->data)
        prev->right = newnode;
    else
        prev->left = newnode;
  }
}
//inorder traversal
int findarr(BST *current, int value1, int value2) {
  int arr1[10], arr2[10];
  int ind, ind2;
  for(tptr = root, ind =0; tptr; prev = tptr, tptr = value1 > prev->value? tptr->right : tptr->left) {
      arr1[ind] = prev;
      ind++;
  }
  for(tptr = root,ind = 0; tptr; prev = tptr, tptr = value2 > prev->value? tptr->right : tptr->left) {
      arr2[ind] = prev;
      ind++;
  }
  for(int ind = 0, ind2 =0; ind < sizeof(arr1)/sizeof(arr[0]) && ind2 < sizeof(arr2)/sizeof(arr2[0]); ind++, ind2++) {
    if(arr1[ind] == arr2[ind]){
      return arr1[ind];
    }
  }

}


//function to find the least common ancestor of a nodes
void findlca(int n1, int n2) {
  int lca;
  lca = findarr(root,n1, n2);
}

int main () {
  for(int ind = 0; ind < sizeof(arr)/sizeof(arr[0]); ind++)
      addNode(arr[ind]);
  findlca();
return 0;
}
