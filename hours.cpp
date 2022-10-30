#include <iostream>
using namespace std;

class Hours
{
    int hours;
    int mins;
    int secs;

public:
    Hours(int hours, int mins, int secs)
    {
        this->hours = hours;
        this->mins = mins;
        this->secs = secs;
    }
    void calculate()
    {
        int hours_into_sec = hours * (60 * 60);
        int mins_into_sec = mins * 60;
        double total_sec = mins_into_sec + hours_into_sec + secs;

        cout << "Hours: " << hours << endl;
        cout << "Mins: " << mins << endl;
        cout << "Secs: " << secs << endl;

        cout << "After converting into seconds: " << total_sec << endl;
    }
};

int main(int argc, char const *argv[])
{
    Hours *S = new Hours(80, 45, 67);
    S->calculate();
    return 0;
}
