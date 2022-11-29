#include <iostream>
using namespace std;

int main(int argc, char const *argv[]) {

    int arr[5] = {0, 1, 2, 3, 4};
    int len = 5;
    int k; 

    cout << "Enter k: ";
    cin >> k;

    int arr_swap[5];
    int j = 0;
    for (int i = k; i < len ; i++) {
        arr_swap[j++] = arr[i];
    }

    for (int i = 0; i<k ; i++){
        arr_swap[j++] = arr[i];
    }

    for (int i = 0; i< len; i++){
        cout << arr_swap[i] << " ";
    }

    return 0;
}