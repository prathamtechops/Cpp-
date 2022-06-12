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