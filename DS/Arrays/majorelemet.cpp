#include <iostream>
using namespace std;

int majorelemet(int *a)
{
    int count = 1;
    int check = 0;
    int ansIndex = 0;
    int n = sizeof(a) / sizeof(a[0]);
    int i;
    for (i = 0; i < n; i++)
    {
        if (a[i] == a[ansIndex])
        {
            count++;
        }
        else
        {
            count--;
        }
        if (count == 0)
        {
            ansIndex = i;
            count = 1;
        }
        for (int j = 0; j < n; j++)
        {
            if (a[j] == i)
            {
                check++;
            }
        }
    }
    if (check >= n / 2)
        return ansIndex;
    return -1;
}

int main(int argc, char const *argv[])
{

    int a[] = {5, 5, 5, 2, 3};

    cout << majorelemet(a);

    return 0;
}