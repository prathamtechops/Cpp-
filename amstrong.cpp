#include <iostream>
#include <math.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    cin>>n;
    int sum = 0;
    int original = n;

    while(n != 0){
        sum = sum + pow(n % 10, 3);
        n = n/10;
    }
    if(original == sum) cout<<"Amstrong";
    else cout<<"Not an Amstrong Number";
    return 0;
}
