#include<stdio.h>
#include<stdlib.h>
//#include<iostream>
//using namespace std;

struct Node
{
  int data;
  struct Node* link;
};

struct Node* top = NULL;

void Push(int x)
{
  struct Node* temp = (struct Node*)malloc(sizeof(struct Node*));
  temp -> data = x;
  temp -> link = top;
  top = temp;
}

void Pop()
{
  struct Node *temp;
  if(top == NULL)
    return;
  temp = top;
  top = top -> link;
  free(temp);
}
