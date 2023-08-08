#include <iostream>
#include <fstream>
using namespace std;

int main(int argc, char const *argv[])
{
    fstream myFile;
    // myFile.open("test.text", ios::out);
    // if (myFile.is_open())
    // {
    //     myFile << "Fello\n";
    //     myFile.close();
    // }
    myFile.open("test.text", ios::in);
    if (myFile.is_open())
    {
        string line;
        while (getline(myFile, line))
        {
            cout << line << endl;
        }
        myFile.close();
    }
    return 0;
}