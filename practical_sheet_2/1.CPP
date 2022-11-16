/*
Roll No : 124
Name : Singh Chandani Harendra

1. Create a class Rectangle. The class has attributes length and width, each of which defaults to 1. It has methods that calculate the perimeter and the area of the rectangle. It has set and get methods for both length and width. The set method should verify that length and width are each floating-point numbers larger than 0.0 and less than 20.0.
*/
#include<iostream>
using namespace std;
class rectangle
{
	float length,width;
public:
	float calPerimeter()
	{
		return (2 * (length + width));
	}
	float calArea()
	{
		return (length * width);
	}
	int check(float l,float w)
	{
		if(l <= 0.0 || l >= 20.0 || w <= 0.0 || w >= 20.0)
		{
			
			cout<<"Please enter valid value..."<<endl;
			return 0;
		}
		else
		{
			return 1;
		}
	}
	int set()
	{
		cout<<"Length and width of Rectangle should be between 0.0 to 20.0"<<endl;
		cout<<"Enter length of Rectangle : ";
		cin>>length;
		cout<<"Enter width of Rectangle : ";
		cin>>width;
		return check(length,width);
	}
	void get()
	{
		cout<<"Property of Rectangle :-"<<endl;
		cout<<"Length : "<<length<<endl;
		cout<<"Width : "<<width<<endl;
	}
};
int main()
{
	rectangle r1;
	int i=0;
	while(i!=1){
		i=r1.set();
	}
	r1.get();
	cout<<"Perimeter of Rectangle : "<<r1.calPerimeter()<<endl;
	cout<<"Area of Rectangle : "<<r1.calArea()<<endl;
	return 0;
}
