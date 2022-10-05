#include <iostream>
using namespace std;
// Full Linked List Program
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
    ~Node()
    {
        int value = this->data;
        if (this->next != NULL)
        {
            this->next = NULL;
        }
    }
};

void insertAtHead(Node *&head, Node *&tail, int data)
{
    if (head == NULL)
    {
        Node *temp = new Node(data);
        head = temp;
        tail = temp;
    }
    else
    {
        Node *temp = new Node(data);
        temp->next = head;
        head = temp;
    }
}

void insertAtTail(Node *&head, Node *&tail, int data)
{
    if (tail == NULL)
    {
        Node *temp = new Node(data);
        tail = temp;
        head = temp;
    }
    else
    {
        Node *temp = new Node(data);
        tail->next = temp;
        tail = temp;
    }
}

void insertAtPosition(Node *&head, Node *&tail, int pos, int data)
{
    if (pos == 1)
    {
        insertAtHead(head, tail, data);
        return;
    }

    Node *temp = head;
    int cnt = 1;
    while (cnt < pos - 1)
    {
        temp = temp->next;
        cnt++;
    }
    if (temp->next == NULL)
    {
        insertAtTail(head, tail, data);
        return;
    }

    Node *cur = new Node(data);
    cur->next = temp->next;
    temp->next = cur;
}

void removeNode(Node *&head, Node *&tail, int pos)
{
    if (pos == 1)
    {
        Node *cur = head;
        head = head->next;
        cur->next = NULL;
        delete cur;
    }
    else
    {
        Node *cur = head;
        Node *prev = NULL;
        int cnt = 1;
        while (cnt < pos)
        {
            prev = cur;
            cur = cur->next;
            cnt++;
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

int len(Node *list)
{
    Node *temp = list;
    int cnt = 0;
    while (temp != NULL)
    {
        cnt++;
        temp = temp->next;
    }
    return cnt;
}

int main(int argc, char const *argv[])
{
    Node *node1 = new Node(1);
    Node *list = node1;
    Node *tail = node1;
    // insertAtHead(list, 2);
    // insertAtHead(list, 1);
    // insertAtTail(tail, 4);
    insertAtPosition(list, tail, 1, 2);
    insertAtPosition(list, tail, 2, 3);
    insertAtPosition(list, tail, 3, 4);
    insertAtPosition(list, tail, 4, 5);
    insertAtPosition(list, tail, 5, 6);
    insertAtHead(list, list, 1);
    insertAtTail(list, tail, 7);

    print(list);

    cout << len(list) << endl;

    removeNode(list, tail, 7);
    print(list);

    cout << len(list) << endl;

    removeNode(list, tail, 1);

    print(list);

    return 0;
}