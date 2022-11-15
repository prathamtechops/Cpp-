#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *next;
};

void printList(node *&node)
{
    while (node != NULL)
    {
        cout << node->data << endl;
        node = node->next;
    }
}

int main(int argc, char const *argv[])
{

    node *head = new node();
    node *second = new node();
    node *third = new node();

    head->data = 1;

    printList(head);

    return 0;
}