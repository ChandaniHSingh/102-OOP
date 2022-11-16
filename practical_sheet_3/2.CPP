/*
Roll No : 124
Name : Singh Chandani Harendra

2. Demonstrate the use of “this” pointer.

*/

#include <iostream>
using namespace std;

class rectangle {
	double length;     
    double width; 
public:
    rectangle(double l = 1.0, double w = 1.0) {
    	length = l;
    	width = w;
	}
	double Volume() {
    	return length * width;
  	}
  	bool compare(rectangle r) {
    	return this->Volume() > r.Volume();
  	}
          
};

int main(void) {
	rectangle r1(3.0, 5.0);    
	rectangle r2(8.0, 2.0);    
	if(r1.compare(r2)) {
    	cout << "rectangle 2 is smaller than rectangle 1" <<endl;
   	} 
	else 
	{
    	cout << "rectangle 2 is equal to or larger than rectangle 1" <<endl;
   	}
   	return 0;
}
