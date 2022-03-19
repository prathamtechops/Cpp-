#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    cin>>n;
    for (int i =1 ; i <= n; i++){
        for(int j = 1; j <= n - i; j++){
            cout<<" ";
        }
        int a = 1;
        for(int j = 1; j <= i; j++){
            cout<<a++;
        }
        a = a - 2;
        for(int j = 1; j < i; j++){
            cout<<a--;
        }      
        
        cout<<endl;
    }
        
    return 0;
}
