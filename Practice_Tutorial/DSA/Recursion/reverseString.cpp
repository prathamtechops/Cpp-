#include <iostream>
using namespace std;
void reverse(string c)
{
    if (c.length() == 0)
        return;
    reverse(c.substr(1));
    cout << c[0];
}
int main(int argc, char const *argv[])
{
    string s = "Nidhi";
    reverse(s);
    return 0;
}
