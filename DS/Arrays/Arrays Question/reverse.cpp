#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int n;

    cout << "Enter the number of element: ";
    cin >> n;

    int *arr = new int[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int s = 0;
    int e = n - 1;

    while (s < e)
        swap(arr[s++], arr[e--]);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}