#include<iostream>
using namespace std;

#define MAX_SIZE 101;

class Queue
{
  private:
    int A[MAX_SIZE];
    int front;
    int rear;
  
  public:
    Queue()
    {
      front = -1;
      rear = -1;
    }
  
  bool isEmpty()
  {
    return (front == -1 && rear == -1); 
  }
  
  bool isFull()
  {
    return (rear+1)%MAX_SIZE == front ? true : false;
  }

  void Enqueue(int x)
  {
    cout << "Enqueuing " << x << "\n";
    if isFull()
    {
      cout << "Error: Queue is Full" << endl;
      return;
    }
    if isEmpty()
    {
      front = rear = 0;
    }
    else
    {
      rear = (rear + 1) % MAX_SIZE;
    }
    A[rear] = x;

    void Dequeue()
    {
      cout << "Dequeuing \n";
      if(isEmpty())
      {
        cout << "Error: Queue is Empty\n";
        return;
      }
      else if(front == rear)
      {
        rear = front = -1;
      }
      else
      {
        front = (front + 1) % MAX_SIZE;
      }
    }
    
    int Front()
    {
      if(front == -1)
      {
        cout << "
    

int main()
{
}
