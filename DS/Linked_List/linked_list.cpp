#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *next;
};

int lenght(node *list)
{

    node *current = list;
    int count = 0;
    if (list == NULL)
    {
        cout << "list is NULL" << endl;
        return -1;
    }

    while (current != NULL)
    {
        count++;
        current = current->next;
    }
    return count;
}
void at_head(node **list, int data)
{
    node *head = new node();
    head->data = data;
    head->next = *list;
    *list = head;
}

void at_tail(node *list, int data)
{
    node *temp = new node();
    temp->data = data;
    temp->next = NULL;
    while (list->next != NULL)
    {
        list = list->next;
    }
    list->next = temp;
}

void at_pos(node *list, int pos, int data)
{
    node *ptr = list;
    node *ptr2 = new node();
    ptr2->data = data;
    ptr2->next = NULL;
    pos--;
    while (pos != 1)
    {
        ptr = ptr2->next;
        pos--;
    }
    ptr2->next = ptr->next;
    ptr->next = ptr2;
}

void print(node *list)
{
    if (list == NULL)
    {
        cout << "list is NULL" << endl;
        return;
    }

    while (list != NULL)
    {
        cout << list->data << " ";
        list = list->next;
    }
}

int main(int argc, char const *argv[])
{
    node *list = new node();
    list->data = 100;
    list->next = NULL;
    at_head(&list, 200);
    at_tail(list, 300);
    at_pos(list, 2, 500);

    cout << lenght(list) << endl;

    print(list);

    return 0;
}