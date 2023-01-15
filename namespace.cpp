#include <iostream>
using namespace std;
namespace s
{
    void sum(int a, int b)
    {
        cout << a + b << endl;
    }
}
using namespace s;
int main()
{
    int num1 = 4;
    int num2 = 2;
    s::sum(num1, num2);
}
