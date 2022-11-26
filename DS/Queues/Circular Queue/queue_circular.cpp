#include <iostream>
using namespace std;

class Queue
{
    int rear, front;
    int size;
    int *arr;

public:
    Queue(int size)
    {
        this->size = size;
        arr = new int[size];
        front = rear = -1;
    }

    void push(int data)
    {
        if ((front == 0 && rear == -1) || (rear == (front - 1) % (size - 1)))
        {
            cout << "\nQueue is full!" << endl;
            return;
        }
        else if (front == -1)
        {
            front = rear = 0;
        }
        else if (rear == size - 1 && front != 0)
        {
            rear = 0;
        }
        else
        {
            rear++;
        }
        arr[rear] = data;
    }

    void pop()
    {
        if (front == -1)
        {
            cout << "\nQueue is empty" << endl;
            return;
        }
        int data = arr[front];
        arr[front] = -1;

        if (front == rear)
        {
            front = -1;
            rear = -1;
        }

        else if (front == size - 1)
        {
            front = 0;
        }
        else
            front++;

        cout << "\nThe data deleted is: " << data << endl;
    }

    void display()
    {
        if (front == -1)
        {
            return;
        }

        cout << "\nElements in queue: ";
        if (rear >= front)
            for (int i = front; i <= rear; i++)
                cout << arr[i] << " ";
        else
        {
            for (int i = front; i < size; i++)
                cout << arr[i] << " ";
            for (int i = 0; i <= rear; i++)
                cout << arr[i] << " ";
        }
    }
};

int main(int argc, char const *argv[])
{

    Queue q(5);

    q.push(14);
    q.push(22);
    q.push(13);
    q.push(-6);

    q.display();
    q.pop();
    q.pop();

    q.display();

    q.push(9);
    q.push(20);
    q.push(5);

    q.display();

    q.push(20);
    return 0;

    return 0;
}