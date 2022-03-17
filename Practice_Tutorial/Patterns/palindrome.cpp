#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    cin>>n;
    int a = 1;
    for (int i =1 ; i <= n; i++){
        int a = i;
        for (int j = 1 ; j <= n - i; j++){
            cout<<" ";
        }
        for(int c = 1 ; c <= n; c++){
            cout << a;
            a--;
        }
        for (int k = 2; k <= n; k++){
            cout<<k;
        }
        cout<< endl;
    }
    return 0;
}
