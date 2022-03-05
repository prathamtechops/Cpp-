#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int saving;
    cout<<"Enter saving"<<endl;
    cin>>saving;

    if (saving > 5000){
        if(saving>10000){
            cout<<"Road Trip"<<endl;
        } else {
            cout<<"Shopping trip"<<endl;
        }
    } else if(saving>2000){
        cout<<"Rashmi"<<endl;
    } else {
        cout<<"Friend"<<endl;
    }
    return 0;
}
