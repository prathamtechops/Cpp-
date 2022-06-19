#include <iostream>
#include <string>
using namespace std;

void powerset(string s, int i, string c)
{
    int count = 0;
    if (i == s.length())
    {
        cout << c << endl;
        return;
    }
    powerset(s, i + 1, c + s[i]);
    powerset(s, i + 1, c);
}

int main(int argc, char const *argv[])
{

    string s = "nidhi";
    string c = "";
    powerset(s, 0, c);
    return 0;
}