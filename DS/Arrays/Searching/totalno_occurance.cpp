#include <iostream>
using namespace std;

int first(int a[], int n, int k)
{
    int s = 0;
    int e = n - 1;
    int mid = s + (e - s / 2);
    int ans = -1;
    while (s <= e)
    {
        if (k == a[mid])
        {
            ans = mid;
            e = mid - 1;
        }
        else if (k < a[mid])
        {
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}
int last(int a[], int n, int k)
{
    int s = 0;
    int e = n - 1;
    int mid = s + (e - s / 2);
    int ans = -1;
    while (s <= e)
    {
        if (k == a[mid])
        {
            ans = mid;
            s = mid + 1;
        }
        else if (k < a[mid])
        {
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}

int main(int argc, char const *argv[])
{

    int a[] = {0, 1, 2, 3, 4, 5, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 7, 7, 7, 7, 9};
    int len = sizeof(a) / sizeof(a[0]);
    int key = 6;
    int f = first(a, len, key);
    int l = last(a, len, key);
    cout << f << " " << l << endl;
    cout << "Total no. of occurrences are " << l - f + 1 << endl;

    return 0;
}