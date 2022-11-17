/*
Program done in the lab of Linked List on Nov 4
*/


#include <iostream>
using namespace std;

class node{
public:
    int data;
    node *next;

    node(int data){
        this->data = data;
        this->next = NULL;
    }
};
void insertAtHead(node *&head,node *&tail, int data)
{
    if(head == NULL)
    {
        node *temp = new node(data);
        head = temp;
        tail = temp;
    }
    else
    {
        node *temp = new node(data);
        temp->next = head;
        head  = temp;
    }
}

void insertAtTail(node *&head,node *&tail, int data)
{
    if(head == NULL)
    {
        node *temp = new node(data);
        head = temp;
        tail = temp;
    }
    else
    {
        node *temp = new node(data);
        tail->next = temp;
        tail = temp;
    }
}

void insertAtPos(node *&head,node *&tail, int pos, int data)
{
    if(pos == 1){
        insertAtHead(head, tail, data);
        return;
    }

    node* temp = head;
    int count = 1;
    node *prev = NULL;
    while(count < pos)
    {
        prev = temp;
        temp = temp ->next;
        count++;

    }
    if(temp->next == NULL)
    {
        insertAtTail(head, tail, data);
        return;
    }
    node *newNode = new node(data);
    newNode->next = temp;
    prev->next = newNode;
}
void print(node *head){
    while(head)
    {
        cout<< head->data << " ";
        head = head -> next;
    }
    cout << endl;
}
int main()
{
    node *list1 = new node(1);
    node *head = list1;
    node *tail = list1;
    insertAtHead(head, tail, 2);
    print(head);
    insertAtHead(head, tail, 3);
    insertAtHead(head, tail, 4);
    insertAtHead(head, tail, 6);
    print(head);
    insertAtTail(head, tail, 10);
    print(head);
    insertAtTail(head, tail, 11);
    print(head);
    insertAtPos(head, tail, 1,7);
    insertAtPos(head, tail, 3,78);
    print(head);
    return 0;
}
