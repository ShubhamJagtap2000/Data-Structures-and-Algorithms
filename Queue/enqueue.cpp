#include<iostream>
using namespace std;

int main()
{
  int arr[4];
  int rear = -1;
  int front = -1;
  
  enqueue(value)
  {
    if(isFull())
      return;
    else if(isEmpty())
    {
      rear = front = 0;
      //rear++; front++;
    }
    else
    {
      rear++;
    }
    arr[rear] = value;
  }
}
