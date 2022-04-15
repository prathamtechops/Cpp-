#include <iostream>
using namespace std;

int prime(int *n)
{
    for (int i = 3; i <= *n; i = i + 2){
        p[i] = 1;
        if(p[i] == 1){
            for(int j = i*i; j <= *n; j = j + i){
                p[j] = 0;
            }
        }
    }
    
}

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    int p[n] = {0};
    prime(p);
    for (int i = 0; i <= n; i++){
        if (p[i] == 1 ) cout<< i<<" ";
    }
    return 0;
}
