#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int r, c;
    cout << "Enter number of rows: "<<endl;
    cin >> r;
    cout << "Enter number of columns: "<<endl;
    cin >> c;
    for (int i = 1; i <= r; i++){
        for (int j = 1; j <= c; j++){
            cout<<"*";
        }
        printf("\n");
    }
    return 0;
}
