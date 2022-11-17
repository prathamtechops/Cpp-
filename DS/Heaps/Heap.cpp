#include <iostream>
using namespace std;

class Heap
{
    int arr[100];
    int size;

public:
    Heap()
    {
        arr[0] = -1;
        size = 0;
    }

    int get_max_size()
    {
        return arr[0];
    };

    void insert(int val)
    {
        size = size + 1;
        int index = size;
        arr[index] = val;

        while (index > 1)
        {
            int parent = index / 2;
            if (arr[parent] < arr[index])
            {
                swap(arr[parent], arr[index]);
                index = parent;
            }
            else
            {
                return;
            }
        }
    }

    void delete_max()
    {
        if (size == 0)
            return;
        arr[1] = arr[size];
        size--;
        int i = 1;

        while (i < size)
        {
            int left = 2 * i;
            int right = 2 * i + 1;
            if (left < size && arr[i] < arr[left])
            {
                swap(arr[i], arr[left]);
                i = left;
            }
            else if (right < size && arr[i] < arr[right])
            {
                swap(arr[i], arr[right]);
                i = right;
            }
            else
                return;
        }
    }

    void print()
    {
        for (int i = 1; i <= size; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};
void heapify(int arr[], int n, int i)
{
    int largest = i;
    int left = 2 * i;
    int right = 2 * i + 1;

    if (left <= n && arr[largest] < arr[left])
        largest = left;
    if (right <= n && arr[largest] < arr[right])
        largest = right;

    if (largest != i)
    {
        swap(arr[largest], arr[i]);
        heapify(arr, n, i);
    }
}
void build_heap(int arr[], int n, int i)
{
    while (i > 0)
    {
        heapify(arr, n, i);
        i--;
    }
}

void heapSort(int arr[], int n)
{
    int size = n;

    while (size > 1)
    {
        swap(arr[size], arr[1]);
        size--;

        heapify(arr, size, 1);
    }
}

int main(int argc, char const *argv[])
{

    int arr[6] = {-1, 54, 53, 55, 52, 50};
    int n = 5;
    build_heap(arr, n - 1, n / 2);

    for (int i = 1; i <= n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    heapSort(arr, n);

    for (int i = 1; i <= n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}