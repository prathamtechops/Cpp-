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

void insertAthead(node *&head, node *&tail, int data)
{
    if (head == NULL)
    {
        node *NewNode = new node(data);
        head = NewNode;
        tail = NewNode;
        tail->next = head;
        return;
    }
    else
    {
        node *NewNode = new node(data);
        tail->next = NewNode;
        NewNode->next = head;
        head = NewNode;
    }
}

void print(node *head)
{
    node *temp = head;
    do
    {
        cout << temp->data << " ";
        temp = temp->next;
    } while (temp != head);
}

int main(int argc, char const *argv[])
{
    node *head = NULL;
    node *tail = NULL;

    insertAthead(head, tail, 3);
    insertAthead(head, tail, 2);
    insertAthead(head, tail, 1);
    print(head);

    return 0;
}
