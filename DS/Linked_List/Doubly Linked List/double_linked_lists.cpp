#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *prev;
    Node *next;

    Node(int data)
    {
        this->data = data;
        this->prev = NULL;
        this->next = NULL;
    }

    ~Node()
    {
        int value = this->data;
        if (next != NULL)
        {
            delete next;
            next = NULL;
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
        head->prev = temp;
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
        temp->prev = tail;
        tail = temp;
    }
}

void insert(Node *&head, Node *&tail, int pos, int data)
{
    if (pos == 1)
    {
        insertAtHead(head, tail, data);
        return;
    }

    Node *temp = head;
    int count = 1;
    while (count < pos - 1)
    {
        temp = temp->next;
        count++;
    }
    if (temp->next == NULL)
    {
        insertAtTail(head, tail, data);
        return;
    }
    Node *cur = new Node(data);
    cur->next = temp->next;
    temp->next->prev = cur;
    temp->next = cur;
    cur->prev = temp;
}
void removeNode(Node *&head, Node *&tail, int pos)
{
    if (pos == 1)
    {
        Node *temp = head;
        temp->next->prev = NULL;
        head = temp->next;
        temp->next = NULL;
        delete temp;
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
        cur->prev = NULL;
        prev->next = cur->next;
        cur->next = NULL;
        delete cur;
    }
}

void print(Node *head)
{
    Node *temp = head;

    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int len(Node *head)
{
    int cnt = 0;
    Node *temp = head;

    while (temp != NULL)
    {
        cnt++;
        temp = temp->next;
    }
    return cnt;
}

int main(int argc, char const *argv[])
{
    Node *list = new Node(1);
    Node *head = list;
    Node *tail = list;

    insertAtHead(head, tail, 0);
    insertAtTail(head, tail, 2);
    insert(head, tail, 2, 9);
    removeNode(head, tail, 4);

    print(head);

    cout << tail->data << endl;
    return 0;
}