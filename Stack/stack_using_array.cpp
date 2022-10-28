#include <iostream>
using namespace std;
#define MAX 1000

class Stack
{
    int top;

public:
    int arr[MAX];
    Stack()
    {
        top = -1;
    }
    bool isFull()
    {
        return (top == MAX - 1);
    }
    bool isEmpty()
    {
        return (top == -1);
    }

    void push(int data)
    {
        if (isFull())
        {
            printf("Stack Overflow!!");
            return;
        }
        else
        {
            arr[++top] = data;
        }
    }
    void pop()
    {
        if (isEmpty())
        {
            printf("Stack is Empty!!");
            return;
        }
        else
        {
            top--;
        }
    }
    int peek()
    {
        return arr[top];
    }
};

int main(int argc, char const *argv[])
{
    Stack S;
    S.push(1);
    cout << S.peek();
    S.push(2);
    cout << S.peek();
    S.push(3);
    cout << S.peek();
    S.push(4);
    cout << S.peek();
    S.pop();
    cout << S.peek();
    S.pop();
    cout << S.peek();
    S.pop();
    cout << S.peek();
    return 0;
}