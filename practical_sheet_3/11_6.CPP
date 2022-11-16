/*
Roll No : 124
Name : Singh Chandani Harendra

11. Implement data files for storing information permanently for problems 6.

*/


#include <iostream>
#include <string>
using namespace std;
FILE *fp; 

#define SIZE 5

template <class T> class Stack {
	int top;
	T st[SIZE];
public:
	Stack();
	void push(T k);
	T pop();
	T topElement();
	bool isFull();
	bool isEmpty();
};
template <class T> Stack<T>::Stack()
{
	top = -1; 
}
template <class T> bool Stack<T>::isEmpty()
{
	if (top == -1)
		return 1;
	else
		return 0;
}
template <class T> bool Stack<T>::isFull()
{
	if (top == (SIZE - 1))
		return 1;
	else
		return 0;
}
template <class T> void Stack<T>::push(T k)
{
	if (isFull())
	{
		cout << "Stack is full\n";
	}
	cout << "Inserted element " << k << endl;
	top = top + 1;
	st[top] = k;
}
template <class T> T Stack<T>::pop()
{
	T popped_element = st[top];
	top--;
	return popped_element;
}
template <class T> T Stack<T>::topElement()
{
	T top_element = st[top];
	return top_element;
}
int main()
{
	fp = fopen("E:\\MCA VNSGU\\102-OOP\\Assignment\\practical\\PS3\\11_6op.txt","w"); 
	if(fp == NULL)
	{
	    printf("Error! The file does not exist.");
	    exit(0);
	}
	Stack<int> int_stack;
	cout<<"Integer Stack : "<<endl;
	fprintf(fp,"Integer Stack : \n");
	int_stack.push(10);
	fprintf(fp,"Inserted element : 10\n");
	int_stack.push(20);
	fprintf(fp,"Inserted element : 20\n");
	int_stack.push(30);
	fprintf(fp,"Inserted element : 30\n");
	int del = int_stack.pop();
	int tp = int_stack.topElement();
	cout <<"Integer Stack  :  " <<del<< " is removed from stack"<< endl;
	fprintf(fp,"Integer Stack  : %d is removed from stack\n",del);
	cout << "Integer Stack : Top element is " << tp<< endl;
	fprintf(fp,"Integer Stack : Top element is %d\n",tp);
	cout<<"-------------------------------------------------------"<<endl;
	fprintf(fp,"-------------------------------------------------------\n");
	Stack<float> float_stack;
	cout<<"Float Stack : "<<endl;
	fprintf(fp,"Float Stack : \n");
	float_stack.push(10.55);
	fprintf(fp,"Inserted element : 10.55\n");
	float_stack.push(20.55);
	fprintf(fp,"Inserted element : 20.55\n");
	float_stack.push(30.55);
	fprintf(fp,"Inserted element : 30.55\n");
	float fdel = float_stack.pop();
	float ftp = float_stack.topElement();
	cout <<"Float Stack  :  " <<fdel << " is removed from stack"<< endl;
	fprintf(fp,"Integer Stack  : %.2f is removed from stack\n",fdel);
	cout << "Float Stack : Top element is " << ftp<< endl;
	fprintf(fp,"Integer Stack : Top element is %.2f\n",ftp);
	cout<<"-------------------------------------------------------"<<endl;
	fprintf(fp,"-------------------------------------------------------\n");
	
	fclose(fp);
	return 0;
}

