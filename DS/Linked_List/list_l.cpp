#include <iostream>
using namespace std;

class node{
public:
    int data;
    node *next;

    node(int data){
        this->data = data;
        this->next = NULL;
    }
    ~node(){
        if(this -> next != NULL)
            this-> next = NULL;
    }
};
void insertAtHead(node *&head,node *&tail, int data)
{
    if(head == NULL)
    {
        node *temp = new node(data);
        head = temp;
        tail = temp;
    }
    else
    {
        node *temp = new node(data);
        temp->next = head;
        head  = temp;
    }
}

void insertAtTail(node *&head,node *&tail, int data)
{
    if(head == NULL)
    {
        node *temp = new node(data);
        head = temp;
        tail = temp;
    }
    else
    {
        node *temp = new node(data);
        tail->next = temp;
        tail = temp;
    }
}

void insertAtPos(node *&head,node *&tail, int pos, int data)
{
    if(pos == 1){
        insertAtHead(head, tail, data);
        return;
    }

    node* temp = head;
    int count = 1;
    node *prev = NULL;
    while(count < pos)
    {
        prev = temp;
        temp = temp ->next;
        count++;

    }
    if(temp->next == NULL)
    {
        insertAtTail(head, tail, data);
        return;
    }
    node *newNode = new node(data);
    newNode->next = temp;
    prev->next = newNode;
}

void removeNode(node *&head, node *&tail, int pos)
{
    if(head == NULL)
    {
        cout <<"The list is empty"<< endl;
        return;
    }
    if(pos == 1)
    {
        head = head-> next;
        return;
    }
    node* cur = head;
    node* prev = NULL;

    int cnt = 1;
    while(cnt < pos)
    {
        prev = cur;
        cur = cur -> next;
        cnt++;
    }

    if(cur->next == NULL)
    {
        prev->next = cur -> next;
        tail = prev;
    }
    else{
        prev->next = cur->next;
    }

    cur = NULL;
    delete cur;

}

void print(node *head){
    while(head)
    {
        cout<< head->data << " ";
        head = head -> next;
    }
    cout << endl;
}

int main()
{
    node *list1 = new node(3);
    node *head = list1;
    node *tail = list1;
    insertAtHead(head, tail, 2);
    insertAtHead(head, tail, 1);
    insertAtTail(head, tail, 4);
    insertAtTail(head, tail, 5);
    print(head);
    removeNode(head, tail, 1);
    removeNode(head, tail, 2);
    removeNode(head, tail, 3);
    print(head);
    return 0;
}
