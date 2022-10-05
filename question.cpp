#include <iostream>
using namespace std;

void binary(int a[], int n)
{
    if (n < 1)
        printf("%s\n", a);
    else
    {
        a[n - 1] = '0';
        binary(a, n - 1);
        a[n - 1] = '1';
        binary(a, n - 1);
    }
}

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;

    int a[n];
    binary(a, n);

    return 0;
}