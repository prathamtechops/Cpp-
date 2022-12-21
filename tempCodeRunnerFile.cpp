#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int arr[5] = {0, 1, 2, 3, 4};
    int j = 4;
    for (int i = 0; i < 3; i++)
    {
        swap(arr[i], arr[j--]);
    }

    for (int i = 0; i < 5; i++)
        cout << arr[i] << " ";
}
