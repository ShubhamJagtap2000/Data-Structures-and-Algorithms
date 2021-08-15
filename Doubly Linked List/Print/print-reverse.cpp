void ReversePrint()
{
  struct Node* temp = head;
  if(temp == NULL)
    return;   //empty list, exit
  //Going to last Node
  while(temp -> next != NULL)
  {
    temp = temp -> next;
  }
  //Traversing backward using prev pointer
  printf("Reverse: ");
  while(temp != NULL)
  {
    printf("%d ", temp -> data);
    temp = temp -> prev;
  }
  printf("\n");
}
  
