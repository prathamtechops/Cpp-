#include <iostream>
using namespace std;

int clearBit(int n, int pos){
    int mask = ~(1<<pos) ;
    return (n & mask);
}

int main(int argc, char const *argv[])
{
    cout<<clearBit(5,2);
    return 0;
}
