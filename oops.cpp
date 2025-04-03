#include <iostream>
#include <string>
using namespace std;

// classes & objects

// objects are entities in real world
// ex car1 car2

// classes are blueprint
// ex car company name

// class student
// {
// private:
//     float scholarship;

// public:
//     // non parametrized constructor
//     student()
//     {
//         cout << "constructor for student" << endl;
//         age = 90;
//     }

//     string name;
//     int age;
//     string dept;

//     // parametrized constructor

//     student(string name, int a, string d)
//     {
//         this->name = name; // this-> indicateb the object valuse / variable
//         age = a;
//         dept = d;
//         scholarship = 0.0;
//     }

//     // copy constructor

//     student(student &orOBJ)
//     {
//         this->name = "Akshat";
//         this->age = 90;
//         this->dept = orOBJ.dept; // copying
//     }

//     void Ginfo()
//     {
//         cout << "Name: " << name << endl;
//         cout << "Department: " << dept << endl;
//         cout << "Age: " << age << endl;
//     }

//     // setter for accecing private
//     void scholar(double sr)
//     {
//         scholarship = sr;
//     }

//     // getter;

//     double getS()
//     {
//         return scholarship;
//     }
// };

// int main()
// {
//     student s("aksh", 18, "cse");
//     s.name = "Aksh";
//     s.scholar(2000);
//     s.Ginfo();
//     cout << s.getS() << endl;
//     cout << s.age << endl;

//     // copy
//     student s1(s);
//     cout << "student 2" << endl;
//     s1.Ginfo();
// }

// // 1. encapsulation
// //  --wrapping up of data & member function in a single unit

// // or using functions and and normal data variable in a single class

// // helps in data hiding

// class accounts
// {
// private:
//     string password; // data hinding
//     float balance;

// public:
//     string username;
//     string id;
// };

// // constructur
// //  used when the initialization of object takes place
// //  - name same as class
// //  - dont have any return type
// //  - automatically called


// shallow copy 

// class student{
// public:
//     string name;
//     float cgpa;

//     student(string name , float cgpa){
//         cout<<"Constructor strats"<<endl;
//         this->name = name ;
//         this->cgpa = cgpa;
//     }

//     void getI(){
//         cout<<"name: "<<name<<endl;
//         cout<<"cgpa: "<<cgpa<<endl;

//     }

//     student(student &obj){
//         this->name = obj.name;
//         this->cgpa = obj.cgpa;
//     }
// };

// int main(){
//     student s1("Aksh", 9.9);
//     student s2 = s1;

//     s2.getI();


//     return 0;
// }


// deep copy (heap)


class student{
    public:
        string name;
        float* cgpaptr;
    
        student(string name , float cgpa){
            cout<<"Constructor strats"<<endl;
            this->name = name ;
           cgpaptr = new float;
           *cgpaptr = cgpa; 
        }
    
        void getI(){
            cout<<"name: "<<name<<endl;
            cout<<"cgpa: "<<*cgpaptr<<endl;
    
        }
    
        student(student &obj){
            this->name = obj.name;
            this->cgpaptr = obj.cgpaptr;
        }
    };
    
    int main(){
        student s1("Aksh", 9.9);
        student s2 = s1;
    
        s1.getI();
        *(s2.cgpaptr) = 9.5;
        s1.getI();
        cout<<"s2";
        s2.getI();
    
    
        return 0;
    }