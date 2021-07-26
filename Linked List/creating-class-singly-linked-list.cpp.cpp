class SinglyLinkedList
{
  public:     //pro tip: put data members in private, methods in public
  Node *head;
  SinglyLinkedList(Node* h);
  void prependNode(Node* h);
  void appendNode(Node* h);
  void insertNode(key);
  void deleteNode(key);
  void updateNode(key, val);
}

int main()
{
  SinglyLinkedList s(&n1);
  s.appendNode(&n2);
  s.prependNode(&n3);
  
}
