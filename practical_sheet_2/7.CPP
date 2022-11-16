/*
Roll No : 124
Name : Singh Chandani Harendra

7. Create a class RationalNumber (fractions) with the following capabilities:
(a).Create a constructor that prevents a 0 denominator in a fraction, reduces or simplifies fractions that are not in reduced form and avoids negative denominators.
(b) Overload the addition, subtraction, multiplication and division operators for this class.
(c) Overload the relational and equality operators for this class. 
*/
#include<iostream>
using namespace std;
class Rational
{
	int numerator,denominator;
public:
	Rational();
	Rational(int,int);
	Rational operator+(Rational);
	Rational operator-(Rational);
	Rational operator*(Rational);
	Rational operator/(Rational);
	bool operator>(Rational);
	bool operator<(Rational);
	bool operator>=(Rational);
	bool operator<=(Rational);
	bool operator==(Rational);
	bool operator!=(Rational);
	void printRational();
	void reduce();
};
 
// default constructor
Rational::Rational() {
	numerator = 0;
	denominator =1;
}
//parameterized constructor
Rational::Rational(int n, int d) {
	numerator = n;
	denominator = d;
	if (d==0 || d<0)
	{
		cout<<"Cannot enter zero or negative numbers for denominator"<<endl;
		return;
	}
	reduce();
} 
Rational Rational::operator+(Rational a) {
	Rational t;
	t.numerator = a.numerator * denominator + a.denominator * numerator;
	t.denominator = a.denominator * denominator;
	t.reduce();
	return t;
}
Rational Rational::operator-(Rational s) {
	Rational t;
	t.numerator = s.denominator * numerator - denominator * s.numerator;
	t.denominator = s.denominator * denominator;
	t.reduce();
	return t;
}
Rational Rational::operator*(Rational m) {
	Rational t;
	
	t.numerator = m.numerator * numerator;
	t.denominator = m.denominator * denominator;
	t.reduce();
	return t;
}
Rational Rational::operator/(Rational v) {
	Rational t;
	 
	t.numerator = v.denominator * numerator;
	t.denominator = denominator * v.numerator;
	t.reduce();
	 
	return t;
}
bool Rational::operator>(Rational v) {
	float f1=numerator/float(denominator);
	float f2=v.numerator/float(v.denominator);
	if(f1>f2)
		return true;
	else 
		return false;
}
bool Rational::operator<(Rational v) {
	float f1=numerator/float(denominator);
	float f2=v.numerator/float(v.denominator);
	if(f1<f2)
		return true;
	else 
		return false; 
}
bool Rational::operator>=(Rational v) {
	float f1=numerator/float(denominator);
	float f2=v.numerator/float(v.denominator);
	if(f1>=f2)
		return true;
	else
		return false;
	 
}
bool Rational::operator<=(Rational v) {
	float f1=numerator/float(denominator);
	float f2=v.numerator/float(v.denominator);
	if(f1<=f2)
		return true;
	else
		return false;
	 
}
bool Rational::operator==(Rational v) {
	float f1=numerator/float(denominator);
	float f2=v.numerator/float(v.denominator);
	if(f1==f2)
		return true;
	else
		return false;
}
bool Rational::operator!=(Rational v) {
	float f1=numerator/float(denominator);
	float f2=v.numerator/float(v.denominator);
	if(f1!=f2)
		return true;
	else 
		return false;
}
//print
void Rational::printRational() {
	if (denominator == 0)
		cout << endl << "DIVIDE BY ZERO ERROR!!!" << endl;
	else if (numerator == 0)
		cout << 0;
	else
		cout << numerator << "/" << denominator;
}
 
//reduce RationalRational
// reduce fraction to lowest terms
void Rational::reduce() {
	int n = numerator < 0 ? -numerator : numerator;
	int d = denominator;
	int largest = n > d ? n : d;
	int gcd = 0; // greatest common divisor
	 
	for (int loop = largest; loop >= 2; loop--)
	if (numerator % loop == 0 && denominator % loop == 0) {
		gcd = loop;
		break;
	}
	 
	if (gcd != 0) {
		numerator /= gcd;
		denominator /= gcd;
	}
}
int main()
{
	//Rational r1,r2,r3;
	Rational r3;
	int n,d;
	int choice;
	char ch;
	cout<<"Enter in format :numerator <space> denominator\n";
	cout<<"Enter first Rational number - numerator and denominator\t: ";
	cin>>n>>d;
	Rational r1(n,d);
	cout<<"Enter second Rational number - numerator and denominator\t:";
	cin>>n>>d;
	Rational r2(n,d);
	do
	{
		cout<<"=============================\n";
		cout<<"\tMENU\n";
		cout<<"=============================\n";
		cout<<"1. +\t2. -\t3.*\n4. /\t5. >\t6. <\n7. >=\t8. <=\t9. !=\n10. ==\t11. Print\t12.Exit\n";
		cout<<"=============================\n";
		cout<<"Enter your choice : ";
		cin>>choice;
		switch(choice)
		{
			case 1:
				r3=r1+r2;
				r3.printRational();
				break;
			case 2:
				r3=r1-r2;
				r3.printRational();
				break;
			case 3:
				r3=r1*r2;
				r3.printRational();
				break;
			case 4:
				r3=r1/r2;
				r3.printRational();
				break;
			case 5:
				if(r1>r2)
				{
					r1.printRational();
					cout<<" is greater than ";
					r2.printRational();
				}
				else
				{
					r1.printRational();
					cout<<" is not greater than ";
					r2.printRational();
				}
				break;
			case 6:
				if(r1<r2)
				{
					r2.printRational();
					cout<<" is greater than ";
					r1.printRational();
				}
				else
				{
					r2.printRational();
					cout<<" is not greater than ";
					r1.printRational();	
				}
				break;
			case 7:
				if(r1>=r2)
				{
					r1.printRational();
					cout<<" is greater than or equal to ";
					r2.printRational();
				}
				else
				{
					r1.printRational();
					cout<<" is not greater than or equal to ";
					r2.printRational();
				}
				break;
			case 8:
				if(r1<=r2)
				{
					r2.printRational();
					cout<<" is greater than or equal to ";
					r1.printRational();
				}
				else
				{
					r2.printRational();
					cout<<" is not greater than or equal to ";
					r1.printRational();
				}
				break;
			case 9:
				if(r1!=r2)
				{
					r1.printRational();
					cout<<" is not equal to ";
					r2.printRational();
				}
				else
 				{
					r1.printRational();
					cout<<" is  equal to ";
					r2.printRational();
				}
				break;
			case 10:
				if(r1==r2)
				{
					r1.printRational();
					cout<<" is equal to ";
					r2.printRational();
				}
				else
				{
					r1.printRational();
					cout<<" is not equal to ";
					r2.printRational();
				}
				break;
			case 11:
				cout<<"\nFirst Rational Number\n";
				r1.printRational();
				cout<<"\nSecond Rational Number\n";
				r2.printRational();
				cout<<"\nThird Rational Number\n";
				r3.printRational();
				break;
			case 12:
				exit(0);;
		}
		cout<<"\nDo you want to continue(y/n)\n";
		cin>>ch;
	}while(ch=='y' || ch=='Y');
	return 0;
}
