#include <iostream>
using namespace std;

template <typename T>
T add(T x, T y)
{
    return (x + y);
}

int main(int argc, char const *argv[])
{
    cout << add<int>(8, 9) << endl;

    cout << add<double>(2.2, 3.3) << endl;

    return 0;
}