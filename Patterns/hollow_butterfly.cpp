#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int n = 5;
    for(int i = 1 ; i <= n; i++){
        for(int j = 1 ; j <= i; j++){
            if(i == 1 || j == 1 || j == i || j == n)cout<<"*";
            else cout<<" ";
        }
        for(int spaces = 1; spaces <=  2*n - 2 * i; spaces++){
            cout<<" ";
        }
        for(int j = 1 ; j <= i; j++){
            if(i == 1 || j == 1 || j == i || j == n)cout<<"*";
            else cout<<" ";
        }
        cout<< endl;
    }
    for(int i = n ; i >= 1; i--){
        for(int j = 1 ; j <= i; j++){
            if(i == 1 || j == 1 || j == i || j == n)cout<<"*";
            else cout<<" ";
        }
        for(int spaces = 1; spaces <=  2*n - 2 * i; spaces++){
            cout<<" ";
        }
        for(int j = 1 ; j <= i; j++){
            if(i == 1 || j == 1 || j == i || j == n)cout<<"*";
            else cout<<" ";
        }
        cout<< endl;
    }
    return 0;
}
