//#include<iostream>
//using namespace std;
#include<stdio.h>
#include<stdlib.h>

struct Node
{
  int data;
  struct Node* next;
};

struct Node* front = NULL;
struct Node* rear = NULL;

void Enqueue(int x)
{
  struct Node* temp = (struct Node*)malloc(sizeof(struct Node*));
  temp -> data = x;
  temp -> next = NULL;
  if(front == NULL && rear == NULL)
  {
    front = rear = temp;
    return;
  }
  rear -> next = temp;
  rear = temp;
}

void Dequeue()
{
  struct Node* temp = front;
  if(front == NULL)
    rerturn;
  if(front == rear)
  {
    front = rear = NULL;
  }
  else
  {
    front = front -> next;
    //temp = temp->next;
  }
  free(temp);
  //free(first); 
  //first = temp;
}

int Front() {
	if(front == NULL) {
		printf("Queue is empty\n");
		return;
	}
	return front->data;
}

void Print() {
	struct Node* temp = front;
	while(temp != NULL) {
		printf("%d ",temp->data);
		temp = temp->next;
	}
	printf("\n");
}

int main(){
	/* Drive code to test the implementation. */
	// Printing elements in Queue after each Enqueue or Dequeue 
	Enqueue(2); Print(); 
	Enqueue(4); Print();
	Enqueue(6); Print();
	Dequeue();  Print();
	Enqueue(8); Print();
}

