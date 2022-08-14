#include <iostream>
using namespace std;

int MatrixPath(int row, int col)
{
    if (row == 1 || col == 1)
        return 1;
    return MatrixPath(row - 1, col) + MatrixPath(row, col - 1);
}

int main(int argc, char const *argv[])
{

    int rows;
    int columns;

    cout << "Enter the Number of Rows and Colunm in the Matrix: ";
    cin >> rows;
    cin >> columns;
    cout << endl
         << "The number of paths you can take are " << MatrixPath(rows, columns);

    return 0;
}