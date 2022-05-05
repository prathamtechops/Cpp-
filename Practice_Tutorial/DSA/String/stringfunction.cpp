#include <iostream>
#include <string>
using namespace std;

int main(int argc, char const *argv[])
{
    string s1 = "As time by...";
    string s2 = " goes";
    cout << s1<<endl;
    s1.insert(7,s2);
    cout << s1 << endl;
    s1.erase(15);
    cout << s1 << endl;
    s1.replace(3,4,"Bill");
    cout << s1 << endl;
    return 0;
}
