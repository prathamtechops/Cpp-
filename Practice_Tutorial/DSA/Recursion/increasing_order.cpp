#include <iostream>
using namespace std;
void count(int n){
    if(n == 0) return;
    cout << n << endl;
    count(n-1);
}
int main(int argc, char const *argv[])
{
    int n;
    cin>>n;
    count(n);
    return 0;
}
