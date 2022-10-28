#include <iostream>
using namespace std;

class ReportCard
{
private:
    int marks[5];
    string name;
    int roll_no;

public:
    ReportCard(string name, int roll_no)
    {
        this->name = name;
        this->roll_no = roll_no;
    }
    // To get marks for the user;
    void get_marks()
    {
        for (int i = 0; i < 5; i++)
        {
            cout << "Marks for subject " << i + 1 << ": ";
            cin >> marks[i];
        }
    }
    // To get average marks
    int get_average()
    {
        int sum = 0;
        for (int i = 0; i < 5; i++)
        {
            sum += marks[i];
        }
        return sum / 5;
    }

    float get_percent()
    {
        float sum = 0;
        for (int i = 0; i < 5; i++)
        {
            sum += marks[i];
            cout << sum << " ";
        }
        float per = (sum / 500) * 100;
        cout << per << endl;
        return per;
    }

    void get_details()
    {
        float percentage = get_percent();
        int average = get_average();
        cout << "Name of the student: " << name << endl;
        cout << "RollNo of students: " << roll_no << endl;
        cout << "Average of students: " << average << endl;
        cout << "Percent of students: " << percentage << endl;

        cout << "*****Marks of the student*****" << endl;
        for (int i = 0; i < 5; i++)
        {
            cout << "Marks for Subject" << i + 1;
            cout << " " << marks[i] << endl;
        }
    }
};

int main(int argc, char const *argv[])
{

    ReportCard student_1("Pratham", 45);

    student_1.get_marks();
    student_1.get_details();

    return 0;
}