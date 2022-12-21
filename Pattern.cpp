#include <iostream>
using namespace std;

int main()
{
    int n = 13;
    for (int i = 1; i < n; i++)
    {
        for (int k = i; k < n; k++)
        {
            cout << " ";
        }
        for (int k = 1; k <= i; k++)
        {
            cout << "*";
        }
        for (int k = 1; k < i; k++)
        {
            cout << "*";
        }
        cout << endl;
    }

    for (int i = n; i >= 0; i--)
    {
        for (int k = i; k < n; k++)
        {
            cout << " ";
        }
        for (int k = 1; k <= i; k++)
        {
            cout << "*";
        }
        for (int k = 1; k < i; k++)
        {
            cout << "*";
        }
        cout << endl;
    }
}
