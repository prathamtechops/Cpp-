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

    ~Node()
    {
        int val = this->data;
        if (this->next != NULL)
        {
            delete next;
            this->next = NULL;
        }
    }
};

void insert(Node *&tail, int element, int data)
{
    if (tail == NULL)
    {
        Node *newtail = new Node(data);
        tail = newtail;
        newtail->next = newtail;
    }
    else
    {
        Node *temp = tail;
        while (temp->data != element)
        {
            temp = temp->next;
        }
        Node *temp2 = new Node(data);
        temp2->next = temp->next;
        temp->next = temp2;
    }
}

void del(Node *tail, int value)
{
    if (tail == NULL)
        return;
    else
    {
        Node *prev = tail;
        Node *cur = prev->next;
        while (cur->data != value)
        {
            prev = cur;
            cur = cur->next;
        }
        prev->next = cur->next;
        if (cur == prev)
        {
            tail = NULL;
        }
        else if (tail == cur)
        {
            tail = prev;
        }
        cur->next = NULL;
        delete cur;
    }
}

void print(Node *list)
{
    if (list == NULL)
        return;
    Node *temp = list;
    do
    {
        cout << list->data << " ";
        list = list->next;
    } while (list != temp);
    cout << endl;
}

int main(int argc, char const *argv[])
{

    return 0;
}