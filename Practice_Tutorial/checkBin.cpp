#include <iostream>
#include <string>
using namespace std;

class Binary
{
    string s;
    void checkString();

public:
    void getString();
    void one_complement();
};

void Binary::getString()
{
    cout << "Enter a Binary number: " << endl;
    cin >> s;
}

void Binary::checkString()
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "Not a Valid Binary";
            exit(1);
        }
    }
}

void Binary::one_complement()
{
    checkString();

    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '1')
            cout << '0';
        else
            cout << '1';
    }
}

int main(int argc, char const *argv[])
{
    Binary b;
    b.getString();
    b.one_complement();

    return 0;
}