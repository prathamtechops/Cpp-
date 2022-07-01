#include <iostream>
#include <string.h>
using namespace std;

class Hero
{
private:
    int health;
    int level;
    char *name;

public:
    static int time;
    Hero()
    {
        name = new char[100];
    }
    Hero(int health, int level, char *name)
    {
        this->health = health;
        this->level = level;
        this->name = name;
    }
    void sethealth(int h)
    {
        health = h;
    }
    void setlevel(int l)
    {
        level = l;
    }
    void setname(char name[])
    {
        strcpy(this->name, name);
    }
    string getname() { return name; }
    int gethealth() { return health; }
    int getlevel() { return level; }

    void print()
    {
        cout << "Name is " << this->name << endl;
        cout << "Level is " << this->level << endl;
        cout << "Health is " << this->health << endl;
    }
};

int Hero::time = 5;

int main(int argc, char const *argv[])
{

    Hero paul(80, 100, "Nidhi");
    // paul.setlevel(80);
    // paul.sethealth(100);
    // cout << paul.getlevel() << endl;
    // cout << paul.gethealth() << endl;
    paul.print();

    Hero *Card = new Hero(80, 100, "Pratham");
    Card->print();
    // Card->setlevel(90);
    // Card->sethealth(110);
    // cout << Card->getlevel() << endl;
    // cout << Card->gethealth() << endl;

    delete Card;

    return 0;
}