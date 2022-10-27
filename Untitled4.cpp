#include<iostream>
using namespace std;

int main()
{
    int arr[5] = {5,4,3,2,1};


    for(int i = 0; i < 5; i++)
    {
        int temp;
        for(int j = i + 1; j < 5; j++){
            if(arr[i] > arr[j]){
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
        }
    }
    }

    for(int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
}
