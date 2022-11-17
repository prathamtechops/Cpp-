#include <iostream>
#include <stack>
using namespace std;

bool isValid(string str)
{
    stack<char> c;
    for (int i = 0; i < str.length(); i++)
    {
        char ch = str[i];

        // if opening bracket...
        if (ch == '(' || ch == '{' || ch == '[')
            c.push(ch);

        // If closing bracket...
        else
        {
            if (!c.empty())
            {
                char top = c.top();
                if ((top == '{' && ch == '}') ||
                    (top == '(' && ch == ')') ||
                    (top == '[' && ch == ']'))
                    c.pop();
                else
                    return false;
            }
            else
                return false;
        }
    }
    return true;
}

int main(int argc, char const *argv[])
{

    string str = "[(])";

    cout
        << isValid(str);

    return 0;
}
