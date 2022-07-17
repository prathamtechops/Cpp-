#include <iostream>
#include <vector>
using namespace std;
int peakIndexInMountainArray(int arr[], int s, int e, int n)
{
    if (s > e)
    {
        return s;
    }

    int mid = s + (e - s) / 2;
    if (arr[mid] < arr[mid + 1])
    {
        return peakIndexInMountainArray(arr, mid + 1, e, n);
    }
    else
    {
        e = mid;
    }
    return e;
}

int main(int argc, char const *argv[])
{
    int a[] = {10, 20, 15, 2, 23, 90, 67};
    int n = sizeof(a) / sizeof(a[0]);
    cout << peakIndexInMountainArray(a, 0, n - 1, n);
    return 0;
}