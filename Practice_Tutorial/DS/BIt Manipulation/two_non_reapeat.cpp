#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int a[] = {5, 4, 1,4,9,5,1,7};
    int result = 0;

    for (int i = 0; i < sizeof(a) / sizeof(a[0]); i++){
        result  = result ^ a[i];
    }
    int rsbm = result & -(result);
    int x = 0;
    int y = 0;
    for (int i = 0; i < sizeof(a) / sizeof(a[0]); i++){
        if((a[i] & rsbm) == 0){
            x = x ^ a[i];
        }
        else {
            y = y ^ a[i];
        }
    }
    cout<< x << " " << y << endl;

    return 0;
}

