#include <bits/stdc++.h>

using namespace std;

int kadane(int arr[], int n)
{
    int current = 0;
    int maxSum = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        current = current + arr[i];
        maxSum = max(current, maxSum);
        if (current < 0)
            current = 0;
    }
    if (maxSum > 0)
        return maxSum;
    else
        return 0;
}

int main(int argc, char const *argv[])
{

    int arr[] = {-1, 2, -2, 5, 7, -3, 1};

    int ans = kadane(arr, 7);
    cout << ans << endl;

    return 0;
}