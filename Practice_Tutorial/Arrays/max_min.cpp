#include <iostream>
#include <limits.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }

    int max_num = INT_MIN;
    int min_num = INT_MAX;
    for (int i = 0; i < n; i++){
        max_num = max(max_num, arr[i]);
        min_num = min(min_num, arr[i]);
    }

    cout << max_num << " " << min_num << endl;
    return 0;
}
