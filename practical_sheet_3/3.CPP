/*
Roll No : 124
Name : Singh Chandani Harendra

3. Overload the new operator stating its advantages.

*/

#include<iostream>
#include<stdlib.h>
using namespace std;
class student
{
    string name,surname;
    int age;
public:
    student()
    {
        cout<< "Constructor is called\n" ;
    }
    student(string name, string surname, int age)
    {
        this->name = name;
        this->surname = surname;
        this->age = age;
    }
    
    void display()
    {
        cout<< "Name:" << name << endl;
        cout<< "Surname:" << surname << endl;
        cout<< "Age:" << age << endl;
    }
    void * operator new(size_t size)
    {
        cout<< "Overloading new operator with size: " << size << endl;
        void * p = ::operator new(size);
     
        return p;
    }
 
    void operator delete(void * p)
    {
        cout<< "Overloading delete operator " << endl;
        free(p);
    }
};
 
int main()
{
    student * s1 = new student("Chandani", "Singh",21);
    s1->display();
    delete s1;
	student * s2 = new student("Sumit", "Singh",24);
    s2->display();
    delete s2;
    return 0;
}
