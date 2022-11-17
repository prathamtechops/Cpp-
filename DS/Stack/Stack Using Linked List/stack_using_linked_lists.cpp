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
        node *temp = new node(data);
        if (!tail)
            temp->next = NULL;
        else
            temp->next = tail;
        tail = temp;
    }
    void pop()
    {
        if (!tail)
        {
            cout << "Empty stack";
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
    s.push(2);
    s.top();
    s.push(3);
    s.top();
    s.push(4);
    s.top();
    s.pop();
    s.top();
    s.pop();
    s.top();
    s.pop();
    s.top();
    return 0;
}