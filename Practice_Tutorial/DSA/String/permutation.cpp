#include <iostream>
using namespace std;

void permute(string s, int l, int r)
{
    if (l == r)
    {
        cout << s << endl;
        return;
    }

    for (int i = l; i <= r; i++)
    {
        swap(s[i], s[l]);
        permute(s, l + 1, r);
        swap(s[i], s[l]);
    }
}

int main(int argc, char const *argv[])
{

    string str = "NIDHI";
    int n = str.size();
    permute(str, 0, n - 1);

    return 0;
}