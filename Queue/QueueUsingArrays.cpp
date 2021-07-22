#include<iostream>
using namespace std;

class Queue{
  private:
    int front;
    int rear;
    int arr[5];
  
  public:
    Queue()
    {
      front = -1;
      rear = -1;
      for(int i = 0; i < 5; i++)
      {
        arr[i] = 0;
      }
    }
  
   bool isEmpty()
   {
     if(front == -1 && rear == -1)
      return true;
     else
       return false;
   }
  
  bool isFull()
  {
    if(rear == 4)
    {
      return true;
    }
    else
      return false;
  }
  
  void enqueue(int val)
  {
    if(isFull())
    {
      cout << "Queue is FULL" << endl;
      return;
    }
    else if(isEmpty())
    {
      rear = 0;
      front = 0;
    }
    else
    {
      rear++;
    }
    arr[rear] = val;
  }
  
  int dequeue()
  {
    int x;
    if(isEmpty())
    {
      cout << "Queue is EMPTY" << endl;
      return; 
    }
    else if(front == rear)
    {
      x = arr[front];
      arr[front] = 0;
      rear = -1;
      front = -1;
      return x;
    }
    else
    {
      x = arr[front];
      arr[front] = 0;
      front++;
      return x;
    }
  }
  
  int count()   //count of all elements in a queue
  {
    return rear - front +  1;
  }
  
  void display()
  {
    cout << Values in the Queue are: " << endl;
      for(int i = 0; i < 5; i++)
      {
        cout << arr[i] << " ";
      }
  }
};

int main()
{
  Queue q1;
  int option, value;
  
  do
  {
    cout << "\nWhat operation do you want to perform. 0 to EXIT." << endl;
    cout << "1. Enqueue()" << endl;
    cout << "2. Dequeue()" << endl;
    cout << "3. isEmpty()" << endl;
    cout << "4. isFull()" << endl;
    cout << "5. count()" << endl;
    cout << "6. display()" << endl;
    
    cin >> option;
    
    switch(option)
    {
      case 0:
        break;
        
      case 1:
        cout << "Enqueue operation \nEnter an item to perform" << endl;
        cin >> value;
        q1.enqueue(value);
        break;
        
      case 2:
        cout << "Dequeue Operation. \nDequeued value: " << q1.dequeue() << endl;
        break;
        
      case 3:
        if(q1.isEmpty())
          cout << "Queue is EMPTY" << endl;
        else
          cout << "Queue is NOT EMPTY"<< endl;
        break;
        
      case 4:
        if(q1.isFull())
          cout << "Queue is FULL" << endl;
        else
          cout << "Queue is NOT FULL" << endl;
        break;
        
      case 5:
        cout << "Count operation. \nCount of items in queue is: " << q1.count() << endl;
        break;
        
      case 6:
        cout << "Display operation. \nQueue is: " << endl;
        q1.display();
        break;
        
      default:
        cout << "Invalide entry" << endl;
        break;
    }
    while(option != 0);
    
    return 0;
  }
}
