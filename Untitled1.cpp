#include<iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the no of elements in the array: ";
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++)
    {
        cout << "Enter element: "<< i + 1 << " " ;
        cin >> arr[i];
    }
    cout << endl;

    int elem;

    cout << "Enter the element you want to search: ";
    cin >> elem;

    for(int i = 0; i<n;i++){
        if(elem == arr[i]){
            cout << "Element founded";
            break;
        }
    }

    int maxi = -100000000;
    int mini = 100000;

    for(int i = 0; i < n; i++){
        if(arr[i] > maxi)
            maxi = arr[i];
        if(arr[i] < mini)
            mini = arr[i];
    }

    cout <<  maxi << " " << mini;

    return 0;
}
