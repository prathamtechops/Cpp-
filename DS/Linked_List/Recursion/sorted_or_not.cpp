#include <iostream>
using namespace std;
bool sorted(int arr[], int n)
{
    if (n == 0 || n == 1)
        return 1;
    if (arr[n - 1] < arr[n - 2])
        return 0;
    return sorted(arr, n - 1);
}

int main(int argc, char const *argv[])
{
    int arr[] = {0, 2, 1, 2, 3};
    int len = sizeof(arr) / sizeof(arr[0]);
    if (sorted(arr, len))
        cout << "Yes";
    else
        cout << "No";
    return 0;
}
