#include <iostream>
using namespace std;

int setBit(int n, int pos){
    return (n | (1<<pos)) ;
}

int main(int argc, char const *argv[])
{
    cout<<setBit(5,1);
    return 0;
}
