#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *next;
};

int list_length(node *list)
{
    node *current = list;
    int count = 0;
    while (current != NULL)
    {
        count++;
        current = current->next;
    }
    return count;
}

int print(node *list)
{
    node *current = list;
    while (current != NULL)
    {
        cout << current->data << endl;
        current = current->next;
    }
}

void insert(node **list, int data, int pos)
{
    int k = 1;
    node *p, *q, *newList;
    newList = new node();

    if (!newList)
    {
        return;
    }

    newList->data = data;
    p = *list;

    if (pos == 1)
    {
        newList->next = p;
        *list = newList;
    }

    else
    {
        while ((p != NULL) && (k < pos))
        {
            k++;
            q = p;
            p = p->next;
        }
        q->next = newList;
        newList->next = p;
    }
}

int main(int argc, char const *argv[])
{

    return 0;
}