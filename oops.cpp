#include <iostream>
#include <string>
using namespace std;

// // classes & objects

// // objects are entities in real world
// // ex car1 car2

// // classes are blueprint
// // ex car company name

// // class student
// // {
// // private:
// //     float scholarship;

// // public:
// //     // non parametrized constructor
// //     student()
// //     {
// //         cout << "constructor for student" << endl;
// //         age = 90;
// //     }

// //     string name;
// //     int age;
// //     string dept;

// //     // parametrized constructor

// //     student(string name, int a, string d)
// //     {
// //         this->name = name; // this-> indicateb the object valuse / variable
// //         age = a;
// //         dept = d;
// //         scholarship = 0.0;
// //     }

// //     // copy constructor

// //     student(student &orOBJ)
// //     {
// //         this->name = "Akshat";
// //         this->age = 90;
// //         this->dept = orOBJ.dept; // copying
// //     }

// //     void Ginfo()
// //     {
// //         cout << "Name: " << name << endl;
// //         cout << "Department: " << dept << endl;
// //         cout << "Age: " << age << endl;
// //     }

// //     // setter for accecing private
// //     void scholar(double sr)
// //     {
// //         scholarship = sr;
// //     }

// //     // getter;

// //     double getS()
// //     {
// //         return scholarship;
// //     }
// // };

// // int main()
// // {
// //     student s("aksh", 18, "cse");
// //     s.name = "Aksh";
// //     s.scholar(2000);
// //     s.Ginfo();
// //     cout << s.getS() << endl;
// //     cout << s.age << endl;

// //     // copy
// //     student s1(s);
// //     cout << "student 2" << endl;
// //     s1.Ginfo();
// // }

// // // 1. encapsulation
// // //  --wrapping up of data & member function in a single unit

// // // or using functions and and normal data variable in a single class

// // // helps in data hiding

// // class accounts
// // {
// // private:
// //     string password; // data hinding
// //     float balance;

// // public:
// //     string username;
// //     string id;
// // };

// // // constructur
// // //  used when the initialization of object takes place
// // //  - name same as class
// // //  - dont have any return type
// // //  - automatically called

// // shallow copy

// // class student{
// // public:
// //     string name;
// //     float cgpa;

// //     student(string name , float cgpa){
// //         cout<<"Constructor strats"<<endl;
// //         this->name = name ;
// //         this->cgpa = cgpa;
// //     }

// //     void getI(){
// //         cout<<"name: "<<name<<endl;
// //         cout<<"cgpa: "<<cgpa<<endl;

// //     }

// //     student(student &obj){
// //         this->name = obj.name;
// //         this->cgpa = obj.cgpa;
// //     }
// // };

// // int main(){
// //     student s1("Aksh", 9.9);
// //     student s2 = s1;

// //     s2.getI();

// //     return 0;
// // }

// // deep copy (heap)

// // Demonstrating deep copy in C++ using a class

// class student
// {
// public:
//     string name;    // Student's name
//     float *cgpaptr; // Pointer to store CGPA in heap memory

//     // Parameterized constructor
//     student(string name, float cgpa)
//     {
//         cout << "Constructor starts" << endl;
//         this->name = name;   // Assigning name
//         cgpaptr = new float; // Allocating memory for CGPA
//         *cgpaptr = cgpa;     // Storing CGPA value
//     }

//     // Function to display student information
//     void getI()
//     {
//         cout << "Name: " << name << endl;
//         cout << "CGPA: " << *cgpaptr << endl;
//     }

//     // Deep Copy Constructor
//     student(student &obj)
//     {
//         cout << "Deep Copy Constructor" << endl;
//         this->name = obj.name;   // Copying name
//         cgpaptr = new float;     // Allocating new memory for CGPA
//         *cgpaptr = *obj.cgpaptr; // Copying CGPA value
//     }

//     // Destructor
//     ~student()
//     {
//         cout << "Destructor called for " << name << endl;
//         delete cgpaptr; // Deleting allocated memory to prevent memory leak
//     }
// };

// // int main() {
// //     student s1("Aksh", 9.9); // Creating object s1
// //     student s2 = s1; // Copying s1 to s2 (Deep Copy)
// //     student s3 = s1; // Copying s1 to s3 (Deep Copy)

// //     s1.getI(); // Displaying s1 details
// //     *(s2.cgpaptr) = 9.5; // Modifying s2's CGPA, should not affect s1 due to deep copy
// //     s1.getI(); // Checking if s1 remains unaffected

// //     s2.name = "A"; // Changing name of s2
// //     s2.getI(); // Displaying s2 details

// //     s3.name = "B"; // Changing name of s3
// //     s3.getI(); // Displaying s3 details

// //     return 0; // Destructor will be automatically called for all objects
// // }

// // interitance
// class people
// {
// public:
//     string name;
//     int age;
//     void gIN()
//     {
//         cout << "Void fxn";
//         cout << "name : " << name << endl;

//         cout << "age : " << age << endl;
//     }
//     people()
//     {
//         cout << "non-parameterized &  parents" << endl;
//     }
//     //     people(string name, int age){
//     //         this->name = name;
//     //         this->age = age;
//     //         cout<<"name : "<<name<<endl;
//     //         cout<<"parameterized"<<endl;

//     //         cout<<"age : "<<age;

//     //     }

//     ~people(){
//         cout<<"Perents destructor"<<endl;
//     }
// };

// class stds : public people
// {
// public:
//     int rollno;
//     stds()
//     {
//         cout << "child" << endl;
//     }
//     void gIN()
//     {
//         cout << "Void fxn";
//         cout << "name : " << name << endl;
//         cout << "roll no : " << rollno << endl;

//         cout << "age : " << age << endl;
//     }
//     ~stds(){
//         cout<<"child destructor"<<endl;

//     }
// };

// // TYPES OF INHERITANCE 

// //1. MULTILEVEL INHERITANCE

// // int main()
// // {

// //     // people p;
// //     // p.name = "Himp";
// //     // p.age = 98;
// //     stds s1;
// //     s1.name = "Aksh";
// //     s1.age = 18;
// //     s1.rollno = 5;

// //     s1.gIN();
// //     // p.gIN();

// //     return 0;
// // }












// // polymorphism // constructour overloading

// // types ->compile time p
// //  -> run time p

// //  -> ability of object to take on different form depending upon context

// class teacher
// {
// public:
//     string name;

//     teacher()
//     {
//         cout << "non parametrized constructor";
//     }
//     teacher(string name)
//     {
//         this->name = name;
//         cout << "parametrized";
//     }

// private:
//     float salary;
// };

// // int main(){

// //     teacher t1;

// //     return 0;
// // }

// // -> compile tiem p
// // FUNCTION OVERLOADING

// class Print
// {
// public:
//     void show(int x)
//     {
//         cout << "int:" << x << endl;
//     }
//     void show(char ch)
//     {
//         cout << "char:" << ch << endl;
//     }
// };

// // int main(){
// //     Print p1;
// //     p1.show(78);
// //     p1.show('a');
// // }


// virtual function


// class parents {
//     public:
//    void getI(){
//         cout<<"Parents class";
//     }
//     virtual void hello(){
//         cout<<"hello ";
//     }

// };
// class child : public parents{
//     public:
//    void getI(){
//         cout<<"child class";
//     }
//     void hello(){
//         cout<<"hello ";
//     }
// };



// Abstraction

// class shape {
//     public:
//     // virtual void draw ()=0;
// };

// class circle : public shape {
//     public:

//     void draw(){
// cout<< "drawing a circle";
//     }
// };


// int main(){
//     circle c1;
//     c1.draw();


//     return 0;
// }


// static keyword

class AS{
    public:
    static int x;
       void incX(){
        x=0;
x++;
       }
};

// Initialize the static variable outside the class
int AS::x = 0;

int main(){
     AS obj1;
     AS obj2;
obj1.x = 300;

cout<<obj1.x<<endl;
cout<<obj2.x<<endl;





}