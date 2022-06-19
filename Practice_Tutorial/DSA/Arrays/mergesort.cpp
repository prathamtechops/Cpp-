#include <iostream>
using namespace std;
void mergesort(int a[], int l, int r);
void merge(int a[], int l, int mid, int r);
int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    mergesort(a, 0, n - 1);
    // printing sorted array
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}

void mergesort(int a[], int l, int r)
{
    if (l < r)
    {
        int mid = (l + r) / 2;
        mergesort(a, l, mid);
        mergesort(a, mid + 1, r);
        merge(a, l, mid, r);
    }
}
void merge(int a[], int l, int mid, int r)
{
    int i = l;
    int j = mid + 1;
    int k = l;
    int b[r];
    while (i <= mid && j <= r)
    {
        if (a[i] < a[j])
        {
            b[k] = a[i];
            i++;
        }
        else
        {
            b[k] = a[j];
            j++;
        }
        k++;
    }
    while (i <= mid)
    {
        b[k] = a[i];
        i++;
        k++;
    }
    while (j <= r)
    {
        b[k] = a[j];
        j++;
        k++;
    }
    for (int k = l; k <= r; k++)
    {
        a[k] = b[k];
    }
}