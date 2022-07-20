#include <iostream>
using namespace std;

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

void insertAtHead(Node *&list, int data)
{
    Node *temp = new Node(data);
    temp->next = list;
    list = temp;
}

// void insertAtTail(Node *&list, int data)
// {
//     Node *temp = new Node(data);
//     Node *ptr = list;

//     while (ptr->next != NULL)
//     {
//         ptr = ptr->next;
//     }
//     ptr->next = temp;
// }
void insertAtTail(Node *&tail, int data)
{
    Node *temp = new Node(data);
    tail->next = temp;
    tail = temp;
}

void print(Node *list)
{
    Node *temp = list;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main(int argc, char const *argv[])
{
    Node *node1 = new Node(3);
    Node *list = node1;
    Node *tail = node1;
    insertAtHead(list, 2);
    insertAtHead(list, 1);
    insertAtTail(tail, 4);

    print(list);

    return 0;
}