#include <iostream>
using namespace std;

void swapAlt(int arr[], int n)
{

    for (int i = 0; i < n; i = i + 2)
    {

        if (i + 1 < n)
            swap(arr[i], arr[i + 1]);
    }
}

int main(int argc, char const *argv[])
{

    int arr[7] = {1, 2, 3, 4, 5, 6, 7};
    swapAlt(arr, 7);
    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}