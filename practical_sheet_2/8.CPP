/*
Roll No : 124
Name : Singh Chandani Harendra

8. For an object m1 of matrix class, can we use m1<<cout . If yes prove it.
*/
#include <iostream>
using namespace std;

class Matrix
{
private:
    int a[3][3];
public:
    void input();
    friend ostream & operator << (ostream &out, const Matrix &m);
};
void Matrix::input(){
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cin>>a[i][j];
		}	
	}
}

ostream & operator << (ostream &out, const Matrix &m)
{
	out << "\nMatrix : \n";
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			out <<"   "<<m.a[i][j];
		}
		out << "\n";
	}
    return out;	
}

int main()
{
    Matrix m1;
    cout<<"Enter 9 elements of Matrix[3][3] : \n";
    m1.input();
    cout << m1;
    return 0;
}
