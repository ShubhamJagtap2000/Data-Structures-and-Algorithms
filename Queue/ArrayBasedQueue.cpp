/* Queue - Circular Array implementation in C++*/
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
  // Constructor - set front and rear as -1. 
	// We are assuming that for an empty Queue, both front and rear will be -1.
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
      return (rear + 1) % MAX_SIZE == front ? true : false;
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
    }

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
        cout << "Error: cannot return front from empty queue\n";
        return -1;
      }
      return A[front];
    }
    
    //This function is only to test the code. 
	  //This is not a standard function for Queue implementation.
    void Print()
    {
      int count = (rear + MAX_SIZE - front) % MAX_SIZE + 1;
      cout << "Queue ";
      for(int i = 0; i < count; i++)
      {
        int index = (front + i) % MAX_SIZE;
        cout << A[index] << " ";
      }
      cout << endl << endl;
    }
};
    
int main()
{
   Queue Q; // creating an instance of Queue Q
   Q.Enqueue(2);  Q.Print();  
   Q.Enqueue(4);  Q.Print();  
   Q.Enqueue(6);  Q.Print();
   Q.Dequeue();	  Q.Print();
   Q.Enqueue(8);  Q.Print();
}
