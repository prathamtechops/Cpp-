#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    cin>>n;
    int i;
    int j;
    for (i =1 ; i <= n; i++){
        for(j = 1; j <= n - i; j++){
            cout<<" ";
        }
        int a = i;
        for(; j<=n; j++){
            cout<<a--;
            
        }
        a = 2;
        for(; j <= n+i -1; j++){
            cout<<a++;
            
        }
        cout<<endl;
    }
        
    return 0;
}
