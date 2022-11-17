#include <iostream>
using namespace std;

int last(int *arr, int s, int e, int key, int n)
{

    int ans = -1;

    if (s <= e)
    {
        int mid = s + (e - s) / 2;

        if (arr[mid] == key)
        {
            ans = mid;
            return last(arr, mid + 1, e, key, n);
        }
        else if (arr[mid] > key)
        {
            return last(arr, s, mid - 1, key, n);
        }
        else
        {
            return last(arr, mid + 1, e, key, n);
        }
    }
    return ans;
}

int first(int *arr, int s, int e, int key, int n)
{

    int ans = -1;

    if (s <= e)
    {
        int mid = s + (e - s) / 2;

        if (arr[mid] == key)
        {
            ans = mid;
            return first(arr, mid + 1, e, key, n);
        }
        else if (arr[mid] > key)
        {
            return first(arr, s, mid - 1, key, n);
        }
        else
        {
            return first(arr, mid + 1, e, key, n);
        }
    }
    return ans;
}

int main(int argc, char const *argv[])
{

    int a[] = {0, 1, 2, 3, 4, 5, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 7, 7, 7, 7, 9};
    int len = sizeof(a) / sizeof(a[0]);
    int key = 6;
    int f = first(a, 0, len - 1, key, len);
    int l = last(a, 0, len - 1, key, len);
    cout << f << " " << l << endl;
    cout << "Total no. of occurrences are " << l - f + 1 << endl;

    return 0;
}