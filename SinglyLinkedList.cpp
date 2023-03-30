#include <iostream>
using namespace std;

// SinglyLinkedList :

class Node
{

    public:
        int data;
        Node *next;

        Node(int data)
        {
            this->data = data;
            this->next = NULL;
        }
};

void InsertAtHead(Node *&head, int val)
{
    // Logic behind this is that the new node created containing the 'data' is inserted at head which means that head pointer will point to new node
    Node *n1 = new Node(val);

    n1->next = head;

    head = n1;
}

void displayNodes(Node *&head)
{

    Node *temp = head;

    while (temp != NULL)
    {
        cout << temp->data << " ";

        temp = temp->next;
    }
    cout << endl;
}

void InsertAtTail(Node *&tail, int val)
{
    // Inserted at the end where only the tail pointer is shifted/updated!

    Node *temp = tail;

   

    Node *n2 = new Node(val);

    temp->next = n2;

    tail = tail->next;
}

void InsertAtMiddle(Node* &tail,Node* &head , int position , int val)
{
    if(position == 1){
        InsertAtHead(head , val);
        return;
    }

    Node* node_to_insert = new Node(val);

    Node* temp = head;

    int count = 1 ; // Inititalizing count to reach the position at which we want to insert the node. Beginning is 1 and not 0.

    while(count < position - 1)
    {
        temp = temp->next;

        count++;
    }

    if(temp ->next == NULL){
        InsertAtTail(tail, val);
        return;
    }

    node_to_insert ->next = temp->next;

    temp ->next = node_to_insert;
}

int main()
{
    Node* headA = new Node(5);  // Main Node

    Node *head = headA;  // head pointer

    Node* tail = headA;  // tail pointer

    InsertAtHead(head, 20);

    displayNodes(head); // Print values in their respective nodes

    InsertAtHead(head, 10);
    
    displayNodes(head);

    InsertAtTail(tail, 30);

    displayNodes(head);

    InsertAtMiddle(tail ,head, 2 , 25);

    displayNodes(head);

    return 0;
}