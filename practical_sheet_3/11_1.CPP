/*
Roll No : 124
Name : Singh Chandani Harendra

11. Implement data files for storing information permanently for problems 1.

*/
#include<iostream>
using namespace std;
FILE *fp; 

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
		fprintf(fp,"Point : (%.2f,%.2f)\n",x,y);
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
		fprintf(fp,"Line : (%.2f,%.2f) , (%.2f,%.2f)\n",x1,y1,x2,y2);
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
		fprintf(fp,"Rectangle : (%.2f,%.2f) , (%.2f,%.2f) , (%.2f,%.2f) , (%.2f,%.2f)\n",x1,y1,x2,y2,x3,y3,x4,y4);
	}
	void del(){
		delete(this);
	}
};
int main()
{
	point *p[10];
	int c = 0;
	fp = fopen("E:\\MCA VNSGU\\102-OOP\\Assignment\\practical\\PS3\\11_1op.txt","w"); 
	if(fp == NULL)
	{
	    printf("Error! The file does not exist.");
	    exit(0);
	}
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
	fprintf(fp,"View all objects\n");
	cout<<"======================="<<endl;
	fprintf(fp,"=======================\n");
	for(int i=0;i<10;i++){
		cout<<i+1<<"th Object :"<<endl;
		fprintf(fp,"%dth Object : \t",i+1);
		p[i]->get();
	}
	cout<<"======================="<<endl;
	cout<<" Odd number objects are deleted"<<endl;
	fprintf(fp,"Odd number objects are deleted\n");
	cout<<"======================="<<endl;
	fprintf(fp,"=======================\n");
	for(int i=0;i<10;i+=2){
		cout<<i+1<<"th Object :"<<endl;
		fprintf(fp,"%dth Object : \t",i+1);
		p[i]->del();
	}cout<<"======================="<<endl;
	cout<<"View all objects"<<endl;
	fprintf(fp,"View all objects\n");
	cout<<"======================="<<endl;
	fprintf(fp,"=======================\n");
	for(int i=1;i<10;i+=2){
		cout<<i+1<<"th Object :"<<endl;
		fprintf(fp,"%dth Object : \t",i+1);
		p[i]->get();
	}
	fclose(fp);
	return 0;
}
