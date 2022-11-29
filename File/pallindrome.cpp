#include <iostream>
#include <string>
using namespace std;

int pallindrome(string s, int l, int r)
{
    if (l >= r)
        return true;
    if (s[l] != s[r])
        return false;
    return pallindrome(s, l + 1, r - 1);
}

int main(int argc, char const *argv[])
{

    string s = "aba";
    int r = s.length() - 1;
    if (pallindrome(s, 0, r) == true)
        printf("Yes");
    else
        printf("No");

    return 0;
}
