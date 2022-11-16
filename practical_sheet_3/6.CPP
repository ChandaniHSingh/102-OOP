/*
Roll No : 124
Name : Singh Chandani Harendra

6. Implement template class “Stack” with all operations.

*/
// C++ Program to Implement stack using Class Templates


#include <iostream>
#include <string>
using namespace std;

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
	Stack<int> int_stack;
	cout<<"Integer Stack : "<<endl;
	int_stack.push(10);
	int_stack.push(20);
	int_stack.push(30);
	cout <<"Integer Stack  :  " <<int_stack.pop() << " is removed from stack"<< endl;
	cout << "Integer Stack : Top element is " << int_stack.topElement()<< endl;
	cout<<"-------------------------------------------------------"<<endl;
	Stack<float> float_stack;
	cout<<"Float Stack : "<<endl;
	float_stack.push(10.55);
	float_stack.push(20.55);
	float_stack.push(30.55);
	cout <<"Float Stack  :  " <<float_stack.pop() << " is removed from stack"<< endl;
	cout << "Float Stack : Top element is " << float_stack.topElement()<< endl;
	cout<<"-------------------------------------------------------"<<endl;
	Stack<string> str_stack;
	cout<<"String Stack : "<<endl;
	str_stack.push("Apple");
	str_stack.push("Bag");
	str_stack.push("Cat");
	cout <<"String Stack  :  " <<str_stack.pop() << " is removed from stack "<< endl;
	cout << "String Stack : Top element is " << str_stack.topElement()<< endl;
	cout<<"-------------------------------------------------------"<<endl;

	return 0;
}

