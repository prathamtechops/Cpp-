#include <iostream>
#include <math.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    cout <<"Enter a number"<<endl;
    cin >> n;
    bool flag = 0;
    for(int  i = 2 ; i <= sqrt(n); i++){
        if(n%i == 0){
            cout << "Not a prime number";
            flag = 1;
            break;
        }
    }
    if (flag == 1){
        cout << "Is a prime number";
    }
    return 0;
}
