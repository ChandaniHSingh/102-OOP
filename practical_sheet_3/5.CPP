/*
Roll No : 124
Name : Singh Chandani Harendra

5. Write a program to create your own manipulator.

*/

#include<iostream>
#include<iomanip>
using namespace std;

ostream & curr(ostream & ostr)
{
cout << fixed << setprecision(2);
cout << "Rs.";
return ostr;
}

int main()
{
float amt = 105.5478;
cout << curr << amt;
return 0;
}
