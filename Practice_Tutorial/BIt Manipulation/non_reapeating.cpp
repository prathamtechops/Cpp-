#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int a[] = {5, 4, 1,4,9,5,1};
    int result = 0;
    for (int i = 0; i < sizeof(a) / sizeof(a[0]); i++){
        result = result ^ a[i];
    }
    cout << result;
    return 0;
}

