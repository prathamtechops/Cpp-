#include <iostream>
using namespace std;

bool ispower2(int n){
    return (n && !(n & n & n -1));
}

int main(int argc, char const *argv[])
{
    cout<<ispower2(16);
    
    return 0;
}
