//Stack Implementation Using Array and User Input for Performing Operations on the Stack

#include<iostream>
#include<string>
using namespace std;

class Stack{
  private:
  int top;
  int arr[5];
  
  public:
  Stack()
  {
    top = -1;
    for(int i = 0; i < 5; i++)
    {
      arr[i] = 0;
    }
  }
  
  bool isEmpty()
  {
    if(top == -1)
      return true;
    else
      return false;
  }
  
  bool isFull()
  {
    if(top == 4)    //Array size is 5
      return true;
    else
      return false;
  }
  
  void push(int val)
  {
    //before pushing, we need to know whether the stack is full or not
    if(isFull())
    {
      cout << "Stack Overflow" << endl;
    }
    else
    {
      top++;    //top equals to 0 here
      arr[top] = val;
    }
  }
  
  int pop()
  {
    //We have to check whether the stack is empty or not
    if(isEmpty())
    {
      cout << "Stack Underflow" << endl;
      return 0;
    }
    else
    {
      int popValue = arr[top];
      arr[top] = 0;
      top--;
      return popValue;
    }
  }
  
  int count()
  {
    return(top + 1);
  }
  
  int peek(int position)
  {
    if(isEmpty())
    {
      cout << "Stack Underflow" << endl;
      return 0;
    }
    else
    {
      return arr[position];
    }
  }
  
  void change(int position, int value)
  {
    arr[pos] = val;
    cout << "Value changed at location" << position << endl;
  }
  
  void dispaly()
  {
    cout << "All values in the Stack are " << endl;
    for(int i = 4; i >= 0; i--)
    {
      cout << arr[i] << endl;
    }
  }
};

int main()
{
  Stack s1;
  int option, posi, value;
  
  do
  {
    cout << "1. push()" << endl;
    cout << "2. pop()" << endl;
    cout << "3. isEmpty()" << endl;
    cout << "4. isFull()" << endl;
    cout << "5. peek()" << endl;
    cout << "6. count()" << endl;
    cout << "7. change()" << endl;
    cout << "8. display()" << endl;
    
    cin >> option;
    switch(option)
    {
      case 0:
        break;
        
      case 1:
        cout << "Enter an item to push in the stack" << endl;
        cin >> value;
        s1.push(value);
        break;
      
      case 2:
        cout << "Pop function called - Popped value: " << s1.pop() << endl;
        break;
        
      case 3:
        if(s1.isEmpty())
          cout << "Stack is empty" << endl;
        else
          cout << "Stack is not empty" << endl;
        
      case 4:
        if(s1.isFull())
          cout << "Stack is full" << endl;
        else
          cout << "Stack is not full" << endl;
        
      case 5:
        cout << "Enter position of item you want to peek: " << endl;
        cin >> posi;
        cout << "Peek function called - Value at position 'posi' is " << endl << s1.peek(posi) << endl;
        break;
        
      case 6:
        cout << "Count function called - Number of items in stack are " << s1.count() << endl;
        break;
        
      case 7:
        cout << "Change function called - " << endl;
        cout << "Enter position of item you want to change: " << endl;
        cin >> posi;
        cout << endl;
        cout << "Enter value of item you want to change: " << endl;
        cin >> value;
        s1.change(position, value);
        break;
        
      case 8:
        cout << "Display function called - " << endl;
        s1.display();
        break;
        
      default:
        cout << "Enter option number " << endl;
    }
  }
  while(i != 0);
  
  return 0;
}
