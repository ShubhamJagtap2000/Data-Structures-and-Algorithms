#include<stdio.h>
#include<stdlib.h>

struct Node
{
  int data;
  struct Node* next;
  struct Node* prev;
};

struct Node* head;                  // global variable - pointer to head node

struct Node* GetNewNode(int x)      // separate function for creation of new node
{
  struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));           // use new() in C++
  temp -> data = x;
  temp -> prev = NULL;
  temp -> next = NULL;
  return newNode;
}

void InsertAtHead(int x)
{
  struct Node* newNode = GetNweNode(x);       // this 'newNode' is different than global 'newNode' in GetNewNode(int ) function, you can name it as 'temp' also
  if(head == NULL)
  {
    head = newNode;
    return;
  }
  head -> prev = newNode;
  newNode -> next = head;
  head = newNode;
}

void InsertAtTail(int x) 
{
	struct Node* temp = head;
	struct Node* newNode = GetNewNode(x);
	if(head == NULL) {
		head = newNode;
		return;
	}
	while(temp -> next != NULL) 
    temp = temp -> next;                        // Go To last Node
	temp -> next = newNode;
	newNode ->  prev = temp;
}

void Print()
{
  struct Node* temp = head;
  printf("Forward: ");
  while(temp != NULL)
  {
    printf("%d ", temp -> data);
    temp = temp -> next;
  }
  printf("\n");
}

void ReversePrint()
{
  struct Node* temp = head;
  if(temp == NULL)
    return;                                   // empty list, exit
  while(temp -> next != NULL)                 // going to the last node
  {
    temp = temp -> next;
  }
  printf("Reverse: ");                        // traversing backwards
  while(temp != NULL)
  {
    printf("%d ", temp -> data);
    temp = temp -> prev;
  }
  printf("\n");
}

int main()
{
  head = NULL;                                // list is empty initially
  
  InsertAtHead(2);
  Print();
  ReversePrint();
  
  InsertAtHead(4);
  Print();
  ReversePrint();
  
  InsertAtHead(6);
  Print();
  ReversePrint();
}
