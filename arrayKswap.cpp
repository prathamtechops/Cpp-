#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{

    int arr[5] = {1, 2, 3, 4, 5};
    int len = sizeof(arr) / sizeof(arr[0]);
    int k;

    cout << "Enter k: ";
    cin >> k;

    cout << "Original Array: " << endl;
    for (int i = 0; i < len; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    int arr_swap[5];
    int j = 0;

    for (int i = k; i < len; i++)
    {
        arr_swap[j++] = arr[i];
    }

    for (int i = 0; i <= k; i++)
    {
        arr_swap[j++] = arr[i];
    }

    cout << "Swapped Array: " << endl;

    for (int i = 0; i < len; i++)
    {
        cout << arr_swap[i] << " ";
    }

    return 0;
}