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
    ~node()
    {
        int val;
        this->data = val;
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
        return;
    }
    else
    {
        node *temp = new node(data);
        temp->next = head;
        head->prev = temp;
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
        return;
    }
    else
    {
        node *temp = new node(data);
        tail->next = temp;
        temp->prev = tail;
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
    newNode->next = temp;
    temp->prev = newNode;
    prev->next = newNode;
    newNode->prev = prev;
}

void deleteNode(node *&head, node *&tail, int pos)
{
    if (pos == 1)
    {
        node *temp = head;
        temp->next->prev = NULL;
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
        cur->prev = NULL;
        cur->next->prev = prev;
        prev->next = cur->next;
        cur->next = NULL;
        delete cur;
    }
}

void print(node *head)
{
    if (head == NULL)
        return;
    node *ptr = head;
    while (ptr != NULL)
    {
        cout << ptr->data << " ";
        ptr = ptr->next;
    }
    cout << endl;
}

int main(int argc, char const *argv[])
{
    node *list = new node(1);
    node *head = list;
    node *tail = list;
    insertAtHead(head, tail, 3);
    insertAtTail(head, tail, 4);
    print(head);
    return 0;
}