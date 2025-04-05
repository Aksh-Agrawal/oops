
#include <iostream>
#include <string>
using namespace std;
// polymorphism // constructour overloading

// types ->compile time p
//  -> run time p

//  -> ability of object to take on different form depending upon context

class teacher
{
public:
    string name;

    teacher()
    {
        cout << "non parametrized constructor";
    }
    teacher(string name)
    {
        this->name = name;
        cout << "parametrized";
    }

private:
    float salary;
};

// int main(){

//     teacher t1;

//     return 0;
// }

// -> compile tiem p
// FUNCTION OVERLOADING

class Print
{
public:
    void show(int x)
    {
        cout << "int:" << x << endl;
    }
    void show(char ch)
    {
        cout << "char:" << ch << endl;
    }
};

// int main(){
//     Print p1;
//     p1.show(78);
//     p1.show('a');
// }
