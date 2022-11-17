#include<iostream>
using namespace std;

int main()
{
    int num = 123;
    int rem;
    int new_num = 0;
    for(int i = num; i > 0; i = i/10){
        rem = i % 10;
        new_num = new_num * 10 + rem;
    }
    cout << new_num;
}
