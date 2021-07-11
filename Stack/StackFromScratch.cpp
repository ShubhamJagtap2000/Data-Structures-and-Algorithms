#include<bits/stdc++.h>
using namespace std;

int A[10];
int top = -1;

void push(int val){
  top++;
  A[top] = val;
}

void pop(){
  cout << A[top] << "value popped" << endl;
  top--;
}

bool isEmpty(){
  if(top < 0)
    return true;
  else
    return false;
}

int isTop(){
  if(top < 0)
    return -1;
  else
    return A[top];
}

void printStack(){
  for(int i = 0; i <= top; i++){
    cout << A[i] << endl;
  }
}

int main()
{
  push(10);
  push(20);
  pop();
  cout << isTop() << endl;
  printStack();
  pop();
  pop();
  cout << isEmpty() << endl;
}
