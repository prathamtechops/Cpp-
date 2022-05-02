#include <iostream>
using namespace std;

void prime(int n)
{
    int isPrime[n];
    for (int i = 0; i <= n; i++){
        isPrime[i] = 1;
    }
    
    isPrime[0] = {0};
    isPrime[1] = {0};
    for(int i = 2; (i * i) <= n; i++){
        for(int j = 2*i; j <= n; j += i){
            isPrime[j] = 0;
        }
    }
    for (int i = 0; i <= n; i++){
        if (isPrime[i] == 1 ) cout<< i<<" ";
    }

}

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    prime(n);
    
    return 0;
}
