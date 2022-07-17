#include <iostream>
using namespace std;
void merge(int arr[], int s, int e)
{
    int mid = s + (e - s) / 2;
    int len1 = mid - s + 1;
    int len2 = e - mid;
    int *arr1 = new int[len1];
    int *arr2 = new int[len2];

    int k = s;

    for (int i = 0; i < len1; i++)
    {
        arr1[i] = arr[k++];
    }
    k = mid + 1;
    for (int i = 0; i < len2; i++)
    {

        arr2[i] = arr[k++];
        }

    int index1 = 0;
    int index2 = 0;

    k = s;

    while (index1 < len1 && index2 < len2)
    {
        if (arr1[index1] < arr2[index2])
        {
            arr[k++] = arr1[index1++];
        }
        else
        {
            arr[k++] = arr2[index2++];
        }
    }

    while (index1 < len1)
    {
        arr[k++] = arr1[index1++];
    }
    while (index2 < len2)
    {
        arr[k++] = arr2[index2++];
    }

    delete[] arr1;
    delete[] arr2;
}
void mergesort(int arr[], int s, int e)
{
    if (s >= e)
    {
        return;
    }
    // cout << "jfkjfk" << endl;

    int mid = (s + e) / 2;
    mergesort(arr, s, mid);
    mergesort(arr, mid + 1, e);
    merge(arr, s, e);
}

int main(int argc, char const *argv[])
{

    int arr[15] = {3, 7, 0, 1, 5, 8, 3, 2, 34, 66, 87, 23, 12, 12, 12};
    int n = 15;

    mergesort(arr, 0, n - 1);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}