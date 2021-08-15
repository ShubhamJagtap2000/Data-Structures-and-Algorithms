#include<stdio.h>
#include<stdlib.h>
//#include<iostream>
//using namespace std;

struct Node
{
  int data;
  struct Node* next;
  struct Node* prev;
};

struct Node* head;  //global variable - pointer to head node

struct Node* GetNewNode(int x)
{
  //local variable
  //will be cleared from memory when function call will finish, so we will not use it.
  /*struct Node myNode;
  myNode.data = x;
  myNode.prev = NULL;
  myNode.next = NULL;
  return &newNode*/
  
  struct Node* newNode = (struct Node*)malloc(sizeof(struct Node)); //OR
  temp -> data = x;
  temp -> prev = NULL;
  temp -> next = NULL;
  return newNode;
}

void InsertAtHead(int x)
{
  struct Node* newNode = GetNewNode(x);   //different local variable
  if(head == NULL)
  {
    head = newNode;
    return;
  }
  head -> prev = newNode;
  newNode -> next = head;
  head = newNode;
}

int main()
{
  head = NULL;
  InsertAtHead(2);
  InsertAtHead(4);
}
