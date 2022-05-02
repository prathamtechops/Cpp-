#include <iostream>
using namespace std;
int first(int arr[], int n, int i, int k){
    if(i == n) return -1;
    if (arr[i] == k) return i;
    return first(arr, n, i+1, k);
}

int last(int arr[], int n, int k){
    if(n < 0) return -1;
    if (arr[n] == k) return n;
    return last(arr, n-1, k);
}
int main(int argc, char const *argv[])
{
    int arr[] = {0,1,2,3,4,5,6,2,4};
    int len = sizeof(arr)/sizeof(arr[0]);
    int key = 2;
    cout<<first(arr, len, 0, key);
    cout<<last(arr, len-1, key);

    return 0;
}
