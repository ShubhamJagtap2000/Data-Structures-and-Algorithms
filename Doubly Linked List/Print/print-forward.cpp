void Print()
{
  struct Node* temp = head;
  printf("Forward: ");
  while(temp != NULL)
  {
    printf("%d ", temp -> data);
    temp = temp ->next;
  }
  printf("\n");
}
