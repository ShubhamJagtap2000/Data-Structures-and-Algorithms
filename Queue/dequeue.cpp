#include<iostream>
using namespace std;

int main()
{
  int arr[4];
  int rear = -1;
  int front = -1;
  
  dequeue()
  {
    int x = 0;
    if(isEmpty())
      return;
    else if(front  == rear)   //when there is only one value in the queue
    {
      x = arr[front];
      front = rear = -1;
    }
    else
    {
      x = arr[front];
      front++;
    }
    return x;
  }
