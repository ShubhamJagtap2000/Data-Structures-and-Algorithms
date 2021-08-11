class Node{
  public:
  int key;
  int data;
  Node* next;
  Node()
  {
    key = 0;
    data = 0;
    next = NULL;
  }
  Node(int k, int d)
  {
    key = k;
    data = d;
    next = NULL;
  }
};

/*class SinglyLinkedList
{
  public:     //data members in private, methods in public
  Node *head;
  SinglyLinkedList(Node* h);
  void prependNode(Node* h);
  void appendNode(Node* h);
  void insertNode(key);
  void deleteNode(key);
  void updateNode(key);
};*/

int main()
{
  Node n1(1, 10);
  Node n2(2, 20);
  Node n3(3, 30);
  
 // SinglyLinkedList s(&n1);
 // s.appendnode(&n2);
 // s.prependnode(&n3);
}
