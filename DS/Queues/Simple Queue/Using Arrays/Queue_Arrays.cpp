#include <iostream>
using namespace std;

class Queue
{
public:
    int front;
    int rear;
    int size;
    int *array;

    Queue(int size)
    {
        array = new int[size];
        front = rear = 0;
    }

    bool isFull()
    {
        return rear == size;
    }

    bool isEmpty()
    {
        return front == rear;
    }

    void push(int data)
    {
        if (isFull())
            cout << "The queue is full!";
        else
            array[rear++] = data;
    }

    int pop()
    {
        if (isEmpty())
            cout << "The queue is empty!";
        else
        {
            int ans = array[front];
            array[front] = -1;
            front++;
            if (isEmpty())
            {
                front = 0;
                rear = 0;
            }
            return ans;
        }
    }

    int top()
    {
        return array[front];
    }
};

int main(int argc, char const *argv[])
{
    Queue q(10);
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