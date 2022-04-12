#include <iostream>
#include <limits.h>
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
    int csum = 0;
    for (int i = 0; i < n;){
        csum += arr[i];
        if(csum<0){
            csum = 0;
        }
        sum = max(sum,csum);
    }
    cout<<sum<<endl;
    return 0;
}
