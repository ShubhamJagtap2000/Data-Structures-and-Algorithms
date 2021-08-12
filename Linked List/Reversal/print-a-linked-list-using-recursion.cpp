#include<stdio.h>
#include<stdlib.h>
//#include<iostream>
//using namespace std;

struct Node
{
  int data;
  struct Node* next;
};

void Print(struct Node* head)
{
  //recursion
  if(head == NULL)
    return;
  printf("%d ", head -> data);
  Print(head -> next);
}

ReversePrint(struct Node* p)
{
  //recursion
  if(p == NULL)
  {
    return;
  }
  ReversePrint(p -> next);
  printf(("%d ", p -> data);
}

struct Node* Insert(Node* head, int data)
{
  Node *temp = (struct Node*)malloc(sizeof(struct Node));
  temp -> data = data;
  temp -> next = NULL;
  if(head == NULL)
  {
    head = temp;
  }
  else
  {
    Node* temp1 = head;
    while(temp1 -> next != NULL)
    {
      temp1 = temp1 -> next;
    }
    temp1 -> next = temp;
  }
  return head;
}

void Print(struct Node* p)
{
  if(p == NULL)   //exit condition
    return;
  Print(p -> next);   //Recursive call
  printf("%d ", p -> data);   First print the value in the node
}

int main()
{
  struct Node* head = NULL;   //local variable
  head = Insert(head, 2);     //at the end of the list
  head = Insert(head, 4);
  head = Insert(head, 6);
  head = Insert(head, 5);
  
  Print(head);
  ReversePrint(head);
}
