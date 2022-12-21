#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *next;
    node *prev;
    node(int data)
    {
        this->data = data;
        this->next = NULL;
        this->prev = NULL;
    }
};

void insertAtHead(node *&tail, int data)
{
    node *newNode = new node(data);
    newNode->next = tail->next;
    newNode->prev = tail;
    tail->next = newNode;
    newNode->next->prev = newNode;
}

void insertAtTail(node *&tail, int data)
{
    node *newNode = new node(data);
    newNode->next = tail->next;
    newNode->prev = tail;
    tail->next = newNode;
    newNode->next->prev = newNode;
    tail = newNode;
}

void deleteAtHead(node *&tail)
{
    tail->next->prev = tail;
    tail->next = tail->next->next;
}

void print(node *list)
{
    if (list == NULL)
        return;
    node *temp = list;
    do
    {
        list = list->next;
        cout << list->data << " ";
    } while (list != temp);
    cout << endl;
}

int main()
{

    node *tail = new node(1);
    tail->next = tail;
    tail->prev = tail;
    insertAtHead(tail, 3);
    insertAtHead(tail, 5);
    insertAtTail(tail, 10);
    print(tail);
    deleteAtHead(tail);
    print(tail);

    return 0;
}
