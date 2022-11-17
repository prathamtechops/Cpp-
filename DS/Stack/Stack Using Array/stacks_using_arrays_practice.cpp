#include <iostream>
using namespace std;

class Stack
{
    int top;
    int *array;
    int size;

public:
    Stack(int size)
    {
        this->size = size;
        top = -1;
        array = new int[size];
    }
    void push(int data)
    {
        if (size - top > 1)
            array[++top] = data;
        else
            cout << "Stack Overflow" << endl;
    }
    void pop()
    {
        if (top >= 0)
            top--;
        else
            cout << "Stack Undifiend: " << endl;
    }
    void peek()
    {
        cout << array[top];
    }
};

int main(int argc, char const *argv[])
{
    Stack s(4);
    s.push(1);
    s.peek();
    s.push(2);
    s.push(2);
    s.push(2);
    s.push(2);

    return 0;
}