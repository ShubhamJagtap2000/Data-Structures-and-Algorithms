//Let, we have a list of integers
struct Node{
  int data;
  Node *link;   //pointer to node
}

//To form a linked list, we have to do two operation: Adding nodes to linked list, Traversing the linked list the same time

Node *A;        //'A' is pointer to head node, for storing the address of the head node
A = NULL;       //Initially the list is empty

//For inserting a node to this linked list, we have to create a memory block

Node *temp = new Node();     //In C, we use malloc() to allocate dynamic memory => Node *temp = (Node*)malloc(sizeof(Node);

//Inserting data into newly created node   

temp -> data = 2;       //(*temp).data = 2;
temp -> link = NULL;    //(*temp).link = NULL; Let list has only one element for now

A = temp;     //Added a Node at the beginning of the list

//Let us add one more node to this linked list

temp = new Node();
temp -> data = 4;
temp -> link = NULL;      //'NULL' as this will be last node right now, now our list has 2 elements => [2 4]

//For traversing through the list

Node *temp1 = A;                //Point the variable temp1 to the address of the head node 'A' of our list and to reach the end of the list
while(temp1 -> link != NULL)
{
  temp1 = temp1 -> link;
}
temp1 -> link = temp;    //This will update the adddress part of Node temp and point to the next node
