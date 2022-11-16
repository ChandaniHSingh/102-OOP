/*
Roll No : 124
Name : Singh Chandani Harendra

4. Write a program that demonstrates the use of all types of Constructors and a destructor.
*/
#include<iostream>
using namespace std;
class student
{
	int marks1,marks2;
public:
	//default contructor
	student()
	{
		marks1 = 0;
		marks2 = 0;
	}
	//parameterized constructor
	student(int m1,int m2)
	{
		marks1 = m1;
		marks2 = m2;
	}
	//copy constructor
	student(student& s)
	{
		marks1 = s.marks1;
		marks2 = s.marks2;
	}
	//destructor
	~student()
	{
		cout<<"Destructor called.."<<endl;
	}
	int sum()
	{
		return marks1 + marks2;
	}
	void display()
	{
		cout<<"Marks1 = "<<marks1<<endl;
		cout<<"Marks2 = "<<marks2<<endl;
		cout<<"Total = "<<this->sum()<<endl<<endl;
	}
};
int main()
{
	student s1,s2(70,80),s3(s2);
	cout<<"Student 1 :"<<endl;
	s1.display();
	cout<<"Student 2 :"<<endl;
	s2.display();
	cout<<"Student 3 :"<<endl;
	s3.display();
	return 0;
}
