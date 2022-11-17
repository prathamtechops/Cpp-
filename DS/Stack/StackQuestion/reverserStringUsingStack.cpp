#include <iostream>
#include <stack>
using namespace std;

int main(int argc, char const *argv[])
{

    string str = "abc";
    stack<char> s;

    for (int i = 0; i < str.length(); i++)
    {
        s.push(str[i]);
    }

    string ans = "";

    for (int i = 0; i < str.length(); i++)
    {
        char c = s.top();
        ans.push_back(c);
        s.pop();
    }

    cout << ans << endl;

    return 0;
}