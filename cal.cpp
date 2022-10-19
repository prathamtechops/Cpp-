#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int num1, num2;
    cout << "Enter 2 numbers: " << endl;

    cin >> num1 >> num2;
    cout << "Adding 2 numbers: " << endl;
    cout << num1 + num2 << endl;
    cout << "subracting 2 numbers: " << endl;
    cout << num1 - num2 << endl;
    cout << "Multiple 2 numbers:" << endl;
    cout << num1 * num2 << endl;
    cout << "Divide 2 numbers: " << endl;
    cout << num1 / num2 << endl;

    return 0;
}