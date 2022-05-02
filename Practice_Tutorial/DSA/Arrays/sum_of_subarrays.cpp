#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n;i++){
        cin >> arr[i];
    }

    int sum = 0;
    for (int i = 0; i < n; i++){
        sum = 0;
        for (int j = i; j < n; j++){
            sum += arr[j];
            cout << sum;
            cout << endl;
        }
    }
    return 0;
}
