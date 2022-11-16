/*
Roll No : 124
Name : Singh Chandani Harendra

5. Write a Program and demonstrate whether the use of inline function increases or decreases the size of the object code.

*/
#include <iostream>
using namespace std;
int cube(int s)
{
	cout<<"Cube of "<<s<<" is : "<<s*s*s<<endl;
	return s*s*s;
}
int main()
{
	for(int i=1;i<=10;i++){
    	int n=cube(i);
    	for(int j=1;j<n;j++){
    		int k = cube(j);
		}
	}
    return 0;
}
