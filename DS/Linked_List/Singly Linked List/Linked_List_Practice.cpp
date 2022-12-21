#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *next;

    node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
    ~node()
    {
        int value = this->data;
        if (this->next != NULL)
        {
            this->next = NULL;
        }
    }
};

void insertAtHead(node *&head, node *&tail, int data)
{
    if (!head)
    {
        node *temp = new node(data);
        head = temp;
        tail = temp;
    }
    else
    {
        node *temp = new node(data);
        temp->next = head;
        head = temp;
    }
}

void insertAtTail(node *&head, node *&tail, int data)
{
    if (!tail)
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

void insertAtPosition(node *&head, node *&tail, int data, int pos)
{
    if (pos == 1)
    {
        insertAtHead(head, tail, data);
        return;
    }
    node *temp = head;
    node *prev = NULL;
    int count = 1;
    while (pos > count)
    {
        prev = temp;
        temp = temp->next;
        count++;
    }
    if (temp->next == NULL)
    {
        insertAtTail(head, tail, data);
        return;
    }
    node *newNode = new node(data);
    prev->next = newNode;
    newNode->next = temp;
}

void deleteNode(node *&head, node *&tail, int pos)
{
    if (pos == 1)
    {
        node *temp = head;
        head = head->next;
        temp->next = NULL;
        delete temp;
    }
    else
    {
        node *cur = head;
        node *prev = NULL;
        int count = 1;

        while (count < pos)
        {
            prev = cur;
            cur = cur->next;
            count++;
        }

        if (cur->next == NULL)
        {
            prev->next = cur->next;
            tail = prev;
        }
        else
        {
            prev->next = cur->next;
        }
        cur->next = NULL;
        delete cur;
    }
}

void print(node *list)
{
    node *temp = list;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main(int argc, char const *argv[])
{

    node *node1 = new node(1);
    node *head = node1;
    node *tail = node1;

    insertAtHead(head, tail, 0);
    insertAtHead(head, tail, -1);
    deleteNode(head, tail, 1);
    print(head);

    return 0;
}