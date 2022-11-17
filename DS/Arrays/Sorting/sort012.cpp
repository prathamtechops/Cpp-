#include <bits/stdc++.h>
void sort012(int *arr, int n)
{
    int i = 0;
    int m = 0;
    int r = n - 1;
    while (m < r)
    {
        if (arr[m] == 1 && i < r)
        {
            m++;
        }
        if (arr[m] == 0 && i < r)
        {
            swap(arr[i], arr[m]);
            m++;
            i++;
        }
        if (arr[m] == 2 && i < r)
        {
            swap(arr[m], arr[r]);
            r--;
        }
    }
}

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{

    return 0;
}