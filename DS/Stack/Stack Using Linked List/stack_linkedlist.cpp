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
};

class Stack
{
    node *tail;

public:
    Stack()
    {
        tail = NULL;
    }
    void push(int data)
    {
        node *newData = new node(data);
        if (!tail)
            newData->next = NULL;
        else
            newData->next = tail;
        tail = newData;
    }
    void pop()
    {
        if (!tail)
        {
            cout << "Stack is empty" << endl;
            return;
        }

        node *temp = tail;
        tail = tail->next;
        delete temp;
    }
    void top()
    {
        cout << tail->data;
    }
};

int main(int argc, char const *argv[])
{

    Stack s;
    s.push(1);
    s.top();

    return 0;
}