#include <iostream>
using namespace std;

class Employee
{
private:
    int a, b, c;

public:
    int d, e;
    void setData(int a1, int b1, int c1);
    void getData();
};

void Employee::setData(int a1, int b1, int c1)
{
    a = a1;
    b = b1;
    c = c1;
}

void Employee::getData()
{
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "c = " << c << endl;
    cout << "d = " << d << endl;
    cout << "e = " << e << endl;
}

int main(int argc, char const *argv[])
{
    Employee Nidhi;

    Nidhi.setData(1, 2, 3);
    Nidhi.d = 4;
    Nidhi.e = 5;
    Nidhi.getData();

    return 0;
}