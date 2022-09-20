#include <iostream>
using namespace std;

class Stack
{
public:
    int *array;
    int size;
    int top;

    Stack(int size)
    {
        this->size = size;
        array = new int[size];
        top = -1;
    }

    void push(int data)
    {
        if (size - top > 1)
        {
            top++;
            array[top] = data;
        }
        else
        {
            cout << "Stack Overflow: " << data << endl;
        }
    }

    void pop()
    {
        if (top >= 0)
            top--;
        else
        {
            cout << "Stack Undifiend: " << endl;
        }
    }

    bool isEmpty()
    {
        if (top == -1)
            return true;
        return false;
    }

    int peek()
    {
        if (top >= 0)
            return array[top];
        else
            cout << "Stack Empty: " << endl;
    }
};

int main(int argc, char const *argv[])
{

    Stack s(5);
    s.push(1);
    s.push(2);
    s.push(1);
    cout << s.peek();
    return 0;
}