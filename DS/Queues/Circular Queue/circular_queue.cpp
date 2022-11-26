#include <iostream>
using namespace std;

class Queue
{
    int front;
    int rear;
    int *arr;
    int size;

public:
    Queue(int size)
    {
        this->size = size;
        arr = new int[size];
        front = rear = -1;
    }

    void push(int data)
    {
        if ((front == 0 && rear == size - 1) || (rear == ((front - 1) % size - 1))) // if the queue is full
            return;
        else if (front == -1) // if the queue is empty
            front = rear = 0;
        else if (rear = size - 1) // if the rear is at the end it will go to the front to maintain a cyclic nature
            rear = 0;
        else
            rear++; // normal push
        arr[rear] = data;
    }

    void pop()
    {
        if (front == -1) // if the queue is empty
            return;
        else if (front == rear) // if a single element is poped out
            front = rear - 1;
        else if (front == size - 1) // if the front is at the last...it has to go back to the front
            front = 0;
        else
            front++;
    }
};

int main(int argc, char const *argv[])
{

    return 0;
}