/*
Roll No : 124
Name : Singh Chandani Harendra

9. Overload the *,+,-,= =,!= and = operators for the complex class.
*/
#include<iostream>
using namespace std;
class complex
{
	float r,i;
public:
	//default contructor
	complex()
	{
	      this->r=this->i=0;
	}
	//parameterized constructor
	complex(float n1,float n2)
	{
		this->r = n1;
		this->i = n2;
		cout<<this->r<<" + i "<<this->i<<endl;
	}
	complex operator + (complex c)
	{
		complex temp;
		temp.r = this->r + c.r;
		temp.i = this->i + c.i;
		return temp;
	}
	complex operator - (complex c)
	{
		complex temp;
		temp.r = this->r - c.r;
		temp.i = this->i - c.i;
		return temp;
	}
	complex operator * (complex c)
	{
		complex temp;
		temp.r = this->r * c.r;
		temp.i = this->i * c.i;
		return temp;
	}
	int  operator == (complex c)
	{
		complex temp;
		if((this->r == c.r) && (this->i == c.i))
			return 1;
		else
			return 0;
	}
	int operator != (complex c)
	{
		complex temp;
		if((this->r != c.r) && (this->i != c.i))
			return 1;
		else
			return 0;
	}
	void display()
	{
		cout<<this->r<<"  + i "<<this->i<<endl;
	}
};
int main()
{
	float r1,i1,r2,i2;
	cout<<"Enter value of R <spcae> value of I : "<<endl;
	cout<<"Enter value of R and I of Complex : ";
	cin>>r1>>i1;
	complex c1(r1,i1);
	cout<<"Enter value of R and I of Complex : ";
	cin>>r2>>i2;
	complex c2(r2,i2);

	complex c3;
	cout<<"Addition : ";
	c3 = c1 + c2;
	c3.display();
	cout<<"Subtraction : ";
	c3 = c1 - c2;
	c3.display();
	cout<<"Multiplication : ";
	c3 = c1 * c2;
	c3.display();
	cout<<"Assignment : ";
	c3 = c1;
	c3.display();
	cout<<"Comparision : ";
	if(c1 == c2)
	{
		cout<<"Same.."<<endl;
	}
	if(c1 != c2)
	{
		cout<<"Not Same.."<<endl;
	}
	
	return 0;
}
