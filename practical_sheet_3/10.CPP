/*
Roll No : 124
Name : Singh Chandani Harendra

10. Write a program to design a class having static member function named showcount() which has the property of displaying the number of objects created of that class.

*/
#include <iostream>
using namespace std;
class test {
    static int objCnt;
  
public:
    test()
    {
    	++objCnt;
    }
    ~test()
    {
    --objCnt;
    }
    static void showcount()
    {
        cout << "Object count:" << objCnt<< "\n";
    }
};
int test::objCnt;
int main()
{
    test t1;
    test::showcount();
  	test t2;
    test::showcount();
    test t3;
    test::showcount();
    test t4;
    test::showcount();
    test t5;
    test::showcount();
    return 0;
}
