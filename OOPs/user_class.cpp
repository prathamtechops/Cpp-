#include<iostream>
using namespace std;

class employee
{
    string name;
    int age;
    int salary;
    string department;
public:
    employee()
    {
        name = "Undefined";
        age = -1;
        salary = -1;
        department = "Not stated";
    }
    void get_details();
    void display();
};

void employee::get_details()
{
    cout <<"Enter the name of the employee: ";
    cin >> name;
    cout<<"Enter the age of the employee: ";
    cin >> age;
    cout <<"Enter the starting salary: ";
    cin >> salary;
    cout << "Enter the department: ";
    cin >> department;
}

void employee::display()
{
    cout <<"Name: "<< name << endl;
    cout <<"Age: " << age << endl;
    cout <<"Salary: "<< salary << endl;
    cout <<"Department: " << department << endl;
}



int main()
{
    int n;
    cout<< "Enter the number of employees: ";
    cin >> n;
    employee ep[n];

    for(int i = 0; i < n; i++)
    {
        cout<<endl;
        cout<<"**********Entering details for employee "<<i+1 <<"************"<< endl;
        ep[i].get_details();
        cout<<endl;
    }

    for(int i = 0; i < n; i++)
    {
        cout<<endl;
        cout<<"**********Displaying details for employee "<<i+1<<"************" << endl;
        ep[i].display();
        cout<<endl;
    }
}

