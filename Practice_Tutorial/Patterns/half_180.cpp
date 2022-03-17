#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int r;
    cout << "Enter number of rows: "<<endl;
    cin >> r;
    for (int i = 1 ; i <= r ; i++){
        for (int j = 1 ; j <= r ; j++){
            if(j<= r -i) cout << " ";
            else cout << "*";
        }
        cout << endl;
    }
    return 0;
}
