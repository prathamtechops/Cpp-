#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int r;
    cout << "Enter number of rows: "<<endl;
    cin >> r;
    for(int i  = r ; i >= 1 ; i--){
        for(int j = 1 ; j <= i; j++){
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}
