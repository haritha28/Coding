#include<stdio.h>
//#include<conio>
int arr[]={10,33,45,56,2,37,32,55,13,1,-20};

typedef struct sll
{
 int data;
 struct sll * next;
}SLL;
//SLL * start , * prev , * tptr;
typedef SLL * SLLPTR;
SLLPTR start,prev , tptr,newnode, sptr, fptr;
void createNode(int inp)
{
  newnode= new sll();
  newnode -> data = inp;
  newnode -> next = NULL;
}
void addNode(int inp)
{
 createNode(inp);

 for(tptr = start ; tptr && newnode->data > tptr-> data ; prev =tptr,tptr = tptr->next );
 if(tptr == start)
  {
    newnode->next = start;
    start = newnode;
  }
  else
  {
    prev->next = newnode;
    newnode->next = tptr;
  }
}
void TraverseList()
{
  for(tptr = start ; tptr ;tptr= tptr->next)
    printf("%d ",tptr->data);
}

void reversePrint(SLLPTR temptr)
{
  if(temptr == NULL) return;
  else
  {
   reversePrint(temptr -> next);
   printf(" %d",temptr->data);
  }

}

//Code to check if there is a loop in the list
void checkloop (SLLPTR temp) {
  sptr = fptr = temp;
  do {
    fptr = (fptr->next)->next;
    sptr = sptr->next;
    if(sptr == fptr)  {
      cout<<"Loop";
    }
    else
      break;
  }while(sptr && fptr && fptr->next);
}


}
int main()
{
 int ind;

 for(ind = 0 ; ind < sizeof(arr)/sizeof(arr[0]); ind++)
   addNode(arr[ind]);
 TraverseList();

 addNode(65);
 addNode(19);
 addNode(58);
 addNode(7);
 addNode(51);
 printf("\n");
 TraverseList();
 printf("\n");
 reversePrint(start);
 checkloop(start);

 return 0;
}
