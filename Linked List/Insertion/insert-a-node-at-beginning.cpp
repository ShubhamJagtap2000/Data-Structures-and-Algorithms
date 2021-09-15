#include<stdio.h>
#include<stdlib.h>

struct Node{
  int data;
  struct Node* next;      //pointer to node to store address of the next node 
};

struct Node* head;        //to store address of the first node 

void Insert(int x)
{
  Node* temp = (Node*)malloc(sizeof(struct Node));    //create a node
  //auto temp = new Node();
  temp -> data = x;
  temp -> NULL;
  if(head != NULL) 
    temp -> head;
  head = temp;
}

void Print()
{
  struct Node* temp = head;
  printf("List is: ");
  while(temp != NULL)
  {
    printf("%d", temp -> data);
    temp = temp -> next;
  }
  printf("\n");
}

int main(){
  head = NULL;            //empty list
  printf("how many numbers?\n");
  int n;
  scanf("%d", &n);
  int i;
  for(i = 0; i < n; i++)
  {
    printf("Enter the number:\n");
    scanf("%d", &x);
    Insert(x);      //insert a node at the beginning of a a linked list
    Print();
  }
}
  
