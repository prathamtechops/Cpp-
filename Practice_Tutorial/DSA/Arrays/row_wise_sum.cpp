#include <iostream>
using namespace std;

void printSum(int arr[][2], int r, int c)
{
    for (int i = 0; i < r; i++)
    {
        int sum = 0;
        for (int j = 0; j < c; j++)
        {
            sum += arr[i][j];
        }
        cout << sum << endl;
    }
}

int largestRowsum(int arr[][2], int r, int c)
{
    int maxi = INT_MIN;
    int index = -1;
    for (int i = 0; i < r; i++)
    {
        int sum = 0;
        for (int j = 0; j < c; j++)
        {
            sum += arr[i][j];
        }
        if (sum > maxi)
        {
            maxi = sum;
            index = i;
        }
    }
    return index;
}

int main(int argc, char const *argv[])
{

    int arr[2][2] = {{10, 2}, {2, 3}};

    printSum(arr, 2, 2);

    cout << largestRowsum(arr, 2, 2);

    return 0;
}