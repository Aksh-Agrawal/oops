#include <iostream>
#include <string>
using namespace std;

// classes & objects

// objects are entities in real world
// ex car1 car2

// classes are blueprint
// ex car company name

class student
{
private:
    float scholarship;

public:

    // non parametrized constructor
     student()
     {
         cout << "constructor for student" << endl;
         age = 90;
     }


    string name;
    int age;
    string dept;

    // parametrized constructor

    student(string n, int a, string d)
    {
        name = n;
        age = a;
        dept = d;
        scholarship = 0.0;
    }

    void Ginfo()
    {
        cout << "Name: " << name << endl;
        cout << "Department: " << dept << endl;
        cout << "Age: " << age << endl;
    }

    // setter for accecing private
    void scholar(double sr)
    {
        scholarship = sr;
    }

    // getter;

    double getS()
    {
        return scholarship;
    }
};

int main()
{
    student s("aksh" ,18 ,"cse");
    s.name = "Aksh";
    s.scholar(2000);
    s.Ginfo();
    cout << s.getS() << endl;
    cout << s.age << endl;
}

// 1. encapsulation
//  --wrapping up of data & member function in a single unit

// or using functions and and normal data variable in a single class

// helps in data hiding

class accounts
{
private:
    string password; // data hinding
    float balance;

public:
    string username;
    string id;
};

// constructur
//  used when the initialization of object takes place
//  - name same as class
//  - dont have any return type
//  - automatically called