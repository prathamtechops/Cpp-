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
        int val = this->data;
        if (this->next != NULL)
        {
            delete next;
            this->next = NULL;
        }
    }
};

void insert(node *&tail, int element, int data)
{
    if (tail == NULL)
    {
        node *newtail = new node(data);
        tail = newtail;
        newtail->next = newtail;
    }
    else
    {
        node *temp = tail;
        while (temp->data != element)
        {
            temp = temp->next;
        }
        node *temp2 = new node(data);
        temp2->next = temp->next;
        temp->next = temp2;
    }
}

void del(node *tail, int value)
{
    if (tail == NULL)
        return;
    else
    {
        node *prev = tail;
        node *cur = prev->next;
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

int main(int argc, char const *argv[])
{

    node *tail = NULL;
    insert(tail, 1, 1);
    insert(tail, 1, 2);
    del(tail, 1);
    print(tail);

    return 0;
}