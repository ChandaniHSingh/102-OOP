/*
Roll No : 124
Name : Singh Chandani Harendra

2. Create a more sophisticated Rectangle class than the one you created in Problem 1. This class stores only the Cartesian coordinates of the four corners of the rectangle. The constructor calls a set method that accepts four sets of coordinates and verifies that each of these is in the first quadrant with no single x or y coordinate larger than 20.0. The set method also verifies that the supplied coordinates do, in fact, specify a rectangle. Member methods calculate the length, width, perimeter and area. The length is the larger of the two dimensions. Include a predicate method square that determines if the rectangle is a square.
*/
#include<iostream>
#include<cmath>
using namespace std;
class rectangle
{
	float x1,y1,x2,y2,x3,y3,x4,y4;
public:
	rectangle(float x1,float x2,float x3,float x4,float y1,float y2,float y3,float y4)
	{
		set(x1,x2,x3,x4,y1,y2,y3,y4);
	}
	void set(float x1,float x2,float x3,float x4,float y1,float y2,float y3,float y4)
	{
		if(x1 <= 0.0 || x1 >= 20.0 || y1 <= 0.0 || y1 >= 20.0
		|| x2 <= 0.0 || x2 >= 20.0 || y2 <= 0.0 || y2 >= 20.0
		|| x3 <= 0.0 || x3 >= 20.0 || y3 <= 0.0 || y3 >= 20.0
		|| x4 <= 0.0 || x4 >= 20.0 || y4 <= 0.0 || y4 >= 20.0)
		{
			cout<<"Please Enter valid coordinates"<<endl;
		}
		else
		{
			if(isRectangle(x1,x2,x3,x4,y1,y2,y3,y4) == 0)
			{
				cout<<"This is Not Rectangle.."<<endl;
			}
			else
			{
				cout<<"Perfect Rectangle.."<<endl;
				this->x1 = x1;
				this->x2 = x2;
				this->x3 = x3;
				this->x4 = x4;
				this->y1 = y1;
				this->y2 = y2;
				this->y3 = y3;
				this->y4 = y4;
				this->isSquare();
			}
		}
	}
	int isRectangle(float x1,float x2,float x3,float x4,float y1,float y2,float y3,float y4)
	{
		double cx,cy;
		double dd1,dd2,dd3,dd4;
		cx=(x1+x2+x3+x4)/4.0;
		cy=(y1+y2+y3+y4)/4.0;

		dd1=sqr(cx-x1)+sqr(cy-y1);
		dd2=sqr(cx-x2)+sqr(cy-y2);
		dd3=sqr(cx-x3)+sqr(cy-y3);
		dd4=sqr(cx-x4)+sqr(cy-y4);

		if(dd1 == dd2 && dd1 == dd3 && dd1 == dd4)
			return 1;
		else
			return 0;

	}
	void isSquare()
	{
		if(this->getLength() == this->getWidth())
		{
			cout<<"This is Square.."<<endl;
		}
	}
	float calPerimeter()
	{
		return (2 * (this->getLength() + this->getWidth()));
	}
	float calArea()
	{
		return (this->getLength() * this->getWidth());
	}
	float getLength()
	{
		return max((this->x2 - this->x1),(this->y2 - this->y4));
	}
	float getWidth()
	{
		return min((this->x2 - this->x1),(this->y2 - this->y4));
	}
	float sqr(float a)
	{
		return a*a ;
	}
	float min(float a,float b)
	{
		return (a<b)?a:b;
	}
	float max(float a,float b)
	{
		return (a>b)?a:b;
	}
};
int main()
{	int x1,x2,x3,x4,y1,y2,y3,y4;
	cout<<"Coordinates value should be between 0.0 and 20.0"<<endl;
	cout<<"(x1,y1)------(x2,y2)"<<endl;
	cout<<"(x3,y3)------(x4,y4)"<<endl;
	cout<<"Enter first coordinates x and y :"<<endl;
	cin>>x1>>y1;
	cout<<"Enter second coordinates x and y :"<<endl;
	cin>>x2>>y2;
	cout<<"Enter third coordinates x and y :"<<endl;
	cin>>x3>>y3;
	cout<<"Enter fourth coordinates x and y :"<<endl;
	cin>>x4>>y4;

	rectangle r1(x1,x2,x3,x4,y1,y2,y3,y4);
	cout<<endl<<endl<<endl;
	cout<<"Length : "<<r1.getLength()<<endl;
	cout<<"Width : "<<r1.getWidth()<<endl;
	cout<<"Perimeter of Rectangle : "<<r1.calPerimeter()<<endl;
	cout<<"Area of Rectangle : "<<r1.calArea()<<endl;
	return 0;
}
