#include <iostream>
using namespace std;

struct node
{
    int data;
    node *next;
};
node *head = NULL;

void insertBeg(int n)
{
    node *ptr = new node();
    ptr->data = n;
    ptr->next = head;
    head = ptr;
}

void insertEnd(int n)
{
    node *ptr = new node();
    ptr->data = n;
    ptr->next = NULL;
    if (head == NULL)
    {
        head = ptr;
    }
    else
    {
        node *temp = head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = ptr;
    }
}
int main(int argc, char const *argv[])
{

    node *ptr = new node();
    ptr->data = 10;
    ptr->next = NULL;
    head = ptr;

    return 0;
}