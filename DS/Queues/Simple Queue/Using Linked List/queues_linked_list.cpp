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
        next = NULL;
    }
};

class Queue
{
    node *front;
    node *rear;

public:
    Queue()
    {
        front = rear = NULL;
    }

    void push(int data)
    {
        node *temp = new node(data);
        if (front == NULL)
        {
            front = rear = temp;
            return;
        }
        rear->next = temp;
        rear = temp;
    }

    void pop()
    {
        if (front == NULL)
        {
            cout << "Queue is empty" << endl;
            return;
        }
        // node *temp = front;
        front = front->next;
        if (front == NULL)
            rear = NULL;
        // delete temp;
    }

    void top()
    {
        cout << front->data;
    }
};

int main(int argc, char const *argv[])
{

    Queue q;
    q.push(1);
    q.top();
    q.pop();
    q.push(2);
    q.top();
    q.pop();
    q.push(3);
    q.top();
    q.pop();
    q.push(4);
    q.top();

    return 0;
}