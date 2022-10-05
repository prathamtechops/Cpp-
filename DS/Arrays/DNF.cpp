#include <iostream>
using namespace std;

void swap(int arr[], int i, int j)
{
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}

void dnf(int a[], int n)
{
    int low = 0;
    int mid = 0;
    int high = n - 1;

    while (mid <= high)
    {
        if (a[mid] == 0)
        {
            swap(a, low, mid);
            low++;
            mid++;
        }
        else if (a[mid] == 1)
        {
            mid++;
        }
        else
        {
            swap(a, mid, high);
            high--;
        }
    }
}

int main(int argc, char const *argv[])
{

    int a[] = {1, 0, 0, 0, 0, 0, 2, 1, 2, 0, 2};
    dnf(a, 11);
    for (int i = 0; i < 11; i++)
    {
        cout << a[i] << endl;
    }

    return 0;
}