/*
Roll No : 124
Name : Singh Chandani Harendra

7. Implement template class “Binary Tree” with all operations.

*/
#include <iostream>
#include <string>
using namespace std;

template<class T>
class BinaryTree
{
	struct node
    {
        T info;
        node *left, *right;
    } *root;

    void makeTree(T data, node **root)
    {
        if (*root == NULL) {
            *root = new node;
            (*root)->info   = data;
            (*root)->left   = NULL;
            (*root)->right  = NULL;
            return;
        }
        else {
            if ((*root)->info >= data) {
                makeTree(data, &(*root)->left);
            } else {
                makeTree(data, &(*root)->right);
            }
        }
    }
    // inorder tree traversal
    void recurseInorderTrav(node *root)
    {
        if (root != NULL) {
            recurseInorderTrav(root->left);
            cout << root->info << " , ";
            recurseInorderTrav(root->right);
        }
    }
    
    // preorder tree traversal
    void recursePreorderTrav(node *root)
    {
        if (root != NULL) {
            cout << root->info << " , ";
            recursePreorderTrav(root->left);
            recursePreorderTrav(root->right);
        }
    }
    
    // postorder tree traversal
    void recursePostorderTrav(node *root)
    {
        if (root != NULL) {
            recursePostorderTrav(root->left);
            recursePostorderTrav(root->right);
            cout << root->info << " , ";
        }
    }

    //comparing info part of the node.
    T operator>=(const T& other)
    {
        return (this >= other);
    }

public:
    BinaryTree()
    {
        root = NULL;
    }
    void insert(T data)
    {
        makeTree(data, &root);
    }
    void printTree(int n)
    {
       if(n==0)
    		recurseInorderTrav(root);
       if(n==-1)
    		recursePreorderTrav(root);
       if(n==1)
    		recursePostorderTrav(root);
    }
};
int main(){
	BinaryTree<int> int_bt;
	cout<<"Integer Binary Tree : "<<endl;
	int_bt.insert(40);
	int_bt.insert(20);
	int_bt.insert(30);
	int_bt.insert(10);
	int_bt.insert(50);
	int_bt.insert(60);
	cout<<endl;
	cout<<"Inorder Travasal :  ";
	int_bt.printTree(0);
	cout<<endl;
	cout<<"Preorder Travasal :  ";
	int_bt.printTree(-1);
	cout<<endl;
	cout<<"Postorder Travasal :  ";
	int_bt.printTree(1);
	cout<<endl;
	cout<<"-------------------------------------------------------"<<endl;
	BinaryTree<float> float_bt;
	cout<<"Float Binary Tree : "<<endl;
	float_bt.insert(40.99);
	float_bt.insert(20.99);
	float_bt.insert(30.99);
	float_bt.insert(10.99);
	float_bt.insert(50.99);
	float_bt.insert(60.99);
	cout<<endl;
	cout<<"Inorder Travasal :  ";
	float_bt.printTree(0);
	cout<<endl;
	cout<<"Preorder Travasal :  ";
	float_bt.printTree(-1);
	cout<<endl;
	cout<<"Postorder Travasal :  ";
	float_bt.printTree(1);
	cout<<endl;
	cout<<"-------------------------------------------------------"<<endl;
	BinaryTree<string> str_bt;
	cout<<"String Binary Tree : "<<endl;
	str_bt.insert("Mango");
	str_bt.insert("Cat");
	str_bt.insert("Apple");
	str_bt.insert("Tiger");
	str_bt.insert("Sun");
	str_bt.insert("Egg");
	cout<<endl;
	cout<<"Inorder Travasal :  ";
	str_bt.printTree(0);
	cout<<endl;
	cout<<"Preorder Travasal :  ";
	str_bt.printTree(-1);
	cout<<endl;
	cout<<"Postorder Travasal :  ";
	str_bt.printTree(1);
	cout<<endl;
	cout<<"-------------------------------------------------------"<<endl;
	return 0;
}
