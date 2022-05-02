#include<iostream>
using namespace std;
int sum(int n){
    if(n == 0) return 0;
    return sum(n-1) + n;
}

int pow(int a, int b){
    if(b == 0) return 1;
    return a*pow(a, b-1);
}

int factorial(int n){
    if(n  == 0 ) return 1;
    return n * factorial(n-1);
}

int fib(int n){
    if(n == 0 || n == 1) return n;
    

    return fib(n-1) + fib(n-2);
}

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    cout << sum(n) << endl;
    cout<< pow(2,2)<<" "<<endl;
    cout << factorial(n)<< endl;
    cout<< fib(n)<< endl;


    return 0;
}
