#include <iostream>
using namespace std;

int sum(int a[], int n)
{
    if (n <= 0)
        return 0;
    return (sum(a, n - 1) + a[n - 1]);
}
void count(int a[], int s, int l)
{
    if (s >= l)
        return;
    cout << a[s] << " ";
    count(a, s + 1, l);
}

int maximum(int a[], int n)
{
    if (n == 0)
        return a[0];
    return max(maximum(a, n - 1), a[n - 1]);
}

int binarySearch(int a[], int l, int r, int key)
{
    int mid = (l + r) / 2;
    if (a[mid] < key)
        return binarySearch(a, mid + 1, r, key);
    if (a[mid] > key)
        return binarySearch(a, l, mid - 1, key);
    else
        return mid;
}

int main(int argc, char const *argv[])
{

    int a[3] = {1, 2, 3};
    int b[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int len = sizeof(a) / sizeof(a[0]);
    int l = sizeof(b) / sizeof(b[0]);
    int key = 5;
    // cout << sum(a, len) << endl;

    // count(a, 0, len);

    // cout << maximum(a, len) << endl;

    cout << binarySearch(b, 0, l, key);

    return 0;
}