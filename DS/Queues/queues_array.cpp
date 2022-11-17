#include <iostream>
using namespace std;

class Queue
{
    int *arr;
    int front;
    int rear;
    int size;

public:
    Queue()
    {
        size = 100001;
        arr = new int[size];
        front = 0;
        rear = 0;
    }
    void push(int data)
    {
        if (rear == size)
        {
            cout << "Queue is full";
            return;
        }
        arr[rear++] = data;
    }

    int pop()
    {
        if (front == rear)
        {
            return -1;
        }
        int ans = arr[front];
        arr[front++] = -1;
        if (front == rear)
        {
            front = 0;
            rear = 0;
        }
        return ans;
    }
    int top()
    {
        if (front == rear)
        {
            return -1;
        }
        return arr[front];
    }

    bool isEmpty() { return front == rear; }
};

int main(int argc, char const *argv[])
{

    Queue q;
    q.push(1);
    cout << q.top() << endl;
    q.push(2);
    cout << q.top() << endl;
    q.push(3);
    cout << q.top() << endl;
    cout << q.pop() << endl;
    cout << q.pop() << endl;
    cout << q.pop() << endl;

    return 0;
}