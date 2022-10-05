#include <iostream>
using namespace std;

class Deque
{
    int rear, front, size;
    int *arr;

public:
    Deque(int size)
    {
        this->size = size;
        front = rear = -1;
        arr = new int[size];
    }

    void pushf(int data)
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
        else if (front == 0 && rear == size - 1)
        {
            front = size - 1;
        }
        else
        {
            front--;
        }
        arr[front] = data;
    }
    void pushr(int data)
    {
        // same as circular queue
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
    };

    void popf()
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

    void popr()
    {
        if (front == -1)
        {
            cout << "\nQueue is empty" << endl;
            return;
        }
        int data = arr[rear];
        arr[rear] = -1;

        if (front == rear)
        {
            front = -1;
            rear = -1;
        }

        else if (rear)
        {
            rear = size - 1;
        }
        else
            rear--;

        cout << "\nThe data deleted is: " << data << endl;
    }

    bool isEmpty()
    {
        return front == -1;
    }
};

int main(int argc, char const *argv[])
{

    return 0;
}