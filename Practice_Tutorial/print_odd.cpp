#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int n;
    cout << "Enter a number"<<endl;
    cin >> n;
    for (int i = 0; i <= n; i++){
        if (i % 2 == 0) continue;
        cout<<i<<endl;
    }
    return 0;
}

