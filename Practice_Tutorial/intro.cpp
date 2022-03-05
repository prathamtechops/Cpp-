#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int amount1;
    cout << "Enter amount by mom:"<< endl;
    cin>>amount1;

    int amount2;
    cout << "Enter amount by dad:"<< endl;
    cin>> amount2;

    int sum = amount1 + amount2;

    cout<<"Total amount: "<< sum << endl;


    return 0;
}
