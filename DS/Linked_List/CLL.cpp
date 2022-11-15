#include<iostream>
using namespace std;

class node
{
public:
    int data;
    node* next;

    node(int data)
    {
        this->data = data;

    }
};

void insertAthead(node *&tail, int data)
{
    node *temp = new node(data);
   if(tail == NULL)
   {
       tail = temp;
       temp -> next = tail;
       return;
   }
   else
   {
       temp -> next = tail -> next;
       tail->next = temp;

   }
}
void deleteAthead(node *&tail)
{
    tail -> next = tail-> next->next;
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

int main()
{
        node *tail = NULL;
        insertAthead(tail, 2);
        insertAthead(tail, 1);
        insertAthead(tail, 4);
        deleteAthead(tail);
        print(tail);
}

