#include <iostream>
using namespace std;

class ReportCard
{
private:
    int marks[5];
    string name;
    int roll_no;

public:
    void get_data(string name, int roll_no)
    {
        this->name = name;
        this->roll_no = roll_no;
    }
    
    void get_roll()
    {
        cout << "Enter the roll no: ";
        int no;
        cin >> no;
        roll_no = no;
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

    ReportCard s[5];
    
    for(int i = 0; i < 5; i++)
    {
        s[i].get_roll();
    }
    
    int key = 3;
    
    int k = 0;
    
    while(k<5){
        if(s[k].roll_no == key)
          break;
        k++; 
    }

    
    if(k == 5)
        cout <<"Not present";
    else
        cout<< "Present at " << k +1;

    return 0;
}
