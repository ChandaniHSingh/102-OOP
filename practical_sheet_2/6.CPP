/*
Roll No : 124
Name : Singh Chandani Harendra

6. Overload the subscript operator [] to return the largest element of a collection, the second largest, the third largest, etc.

*/

#include <iostream>
#include<bits/stdc++.h>
using namespace std;
class Array {
private:
    int* ptr;
    int size;
  
public:
    Array(int*, int);
    int& operator[](int);
    void print() const;
};
int& Array::operator[](int index)
{
    if (index >= size) {
        cout << "Array index out of bound, exiting";
        exit(0);
    }
    return ptr[size-index];
}
  
Array::Array(int* p = NULL, int s = 0)
{
    size = s;
    ptr = NULL;
    if (s != 0) {
        ptr = new int[s];
        for (int i = 0; i < s; i++)
            ptr[i] = p[i];
    }
    sort(ptr , ptr + s);
}
  
void Array::print() const
{
	cout<<"Ascending order : ";
    for (int i = 0; i < size; i++)
        cout << ptr[i] << " ";
    cout << endl;
}
  
// Driver program to test above methods
int main()
{
	int n;
    int a[100];
    cout<<"ENter size of Array : ";
    cin>>n;
    cout<<"Enter elements of array"<<endl;
    
    for(int i=0;i<n;i++){
    	cin>>a[i];
	}
    Array arr1(a, n);
    cout<<"1st Largest : "<<arr1[1]<<endl;
    cout<<"2nd Largest : "<<arr1[2]<<endl;
    cout<<"3rd Largest : "<<arr1[3]<<endl;
    arr1.print();
    return 0;
}
