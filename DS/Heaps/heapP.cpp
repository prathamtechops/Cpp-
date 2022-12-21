#include <iostream>
using namespace std;

class heap
{
public:
    int arr[100];
    int size;

    heap()
    {
        arr[0] = -1;
        size = 0;
    }

    void insert(int val)
    {
        size++;
        int i = size;
        arr[i] = val;
        while (i > 1)
        {
            int p = i / 2;
            if (arr[p] < arr[i])
            {
                swap(arr[i], arr[p]);
                i = p;
            }
            else
                return;
        }
    }

    void del()
    {
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

int main(int argc, char const *argv[])
{
    heap h;
    h.insert(50);
    h.insert(55);
    h.insert(53);
    h.insert(52);
    h.insert(54);
    h.print();
    return 0;
}