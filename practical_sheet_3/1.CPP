/*
Roll No : 124
Name : Singh Chandani Harendra

1. Create classes point, line, rectangle and use dynamic polymorphism to provide support for various operations like insert, delete etc.

*/

#include<iostream>
using namespace std;
class point
{
	float x,y;
public:
	virtual void set()
	{
		cout<<"Enter X-axis of point : ";
		cin>>x;
		cout<<"Enter Y-axis of point : ";
		cin>>y;
	}
	virtual void get()
	{
		cout<<"Point : ("<<x<<","<<y<<")"<<endl;
	}
	virtual void del(){
		delete(this);
	}
};
class line : public point
{
	float x1,y1,x2,y2;
public:
	void set()
	{
		cout<<"Enter X-axis of 1st point for line: ";
		cin>>x1;
		cout<<"Enter Y-axis of 1st point for line : ";
		cin>>y1;
		cout<<"Enter X-axis of 2nd point for line: ";
		cin>>x2;
		cout<<"Enter Y-axis of 2nd point for line : ";
		cin>>y2;
	}
	void get()
	{
		cout<<"Line : ("<<x1<<","<<y1<<") , ("<<x2<<","<<y2<<")"<<endl;
	}
	void del(){
		delete(this);
	}
};
class rectangle : public point
{
	float x1,y1,x2,y2,x3,y3,x4,y4;
public:
	void set()
	{
		cout<<"Enter X-axis of 1st point for line: ";
		cin>>x1;
		cout<<"Enter Y-axis of 1st point for line : ";
		cin>>y1;
		cout<<"Enter X-axis of 2nd point for line: ";
		cin>>x2;
		cout<<"Enter Y-axis of 2nd point for line : ";
		cin>>y2;
		cout<<"Enter X-axis of 3rd point for line: ";
		cin>>x3;
		cout<<"Enter Y-axis of 3rd point for line : ";
		cin>>y3;
		cout<<"Enter X-axis of 4th point for line: ";
		cin>>x4;
		cout<<"Enter Y-axis of 4th point for line : ";
		cin>>y4;
	}
	void get()
	{
		cout<<"Rectangle : ("<<x1<<","<<y1<<") , ("<<x2<<","<<y2<<") , ("<<x3<<","<<y3<<") , ("<<x4<<","<<y4<<")"<<endl;
	}
	void del(){
		delete(this);
	}
};
int main()
{
	point *p[10];
	int c = 0;
	cout<<"====================="<<endl;
	cout<<"Insert 10 objects "<<endl;
	cout<<"====================="<<endl;
	for(int i=0;i<10;i++){
		cout<<"Options for which class"<<endl<<"====================="<<endl;
		cout<<"1. Point"<<endl;
		cout<<"2. Line"<<endl;
		cout<<"3. Rectangle"<<endl;
		cout<<"======================="<<endl;
		cout<<"Enter your choice : "<<endl;
		cin>>c;
		cout<<i+1<<"th Object : "<<endl;
		switch(c){
			case 1:
				p[i] = new point;
				p[i]->set();
				break;
			case 2:
				p[i] = new line;
				p[i]->set();
				break;
			case 3:
				p[i] = new rectangle;
				p[i]->set();
				break;
		}
	}
	cout<<"======================="<<endl;
	cout<<"View all objects"<<endl;
	cout<<"======================="<<endl;
	for(int i=0;i<10;i++){
		cout<<i+1<<"th Object :"<<endl;
		p[i]->get();
	}
	cout<<"======================="<<endl;
	cout<<" Odd number objects are deleted"<<endl;
	cout<<"======================="<<endl;
	for(int i=0;i<10;i+=2){
		cout<<i+1<<"th Object :"<<endl;
		p[i]->del();
	}
	cout<<"======================="<<endl;
	cout<<"View all objects"<<endl;
	cout<<"======================="<<endl;
	for(int i=1;i<10;i+=2){
		cout<<i+1<<"th Object :";
		p[i]->get();
	}
	return 0;
}
