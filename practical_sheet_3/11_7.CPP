/*
Roll No : 124
Name : Singh Chandani Harendra

11. Implement data files for storing information permanently for problems 7.

*/
#include <iostream>
#include <string>
#include <fstream>
using namespace std;
//FILE *fp; 
fstream file;
string text;
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
            text = root->info;
            file << text <<" , ";
            recurseInorderTrav(root->right);
        }
    }
    
    // preorder tree traversal
    void recursePreorderTrav(node *root)
    {
        if (root != NULL) {
            cout << root->info << " , ";
            text = root->info;
            file << text <<" , ";
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
            text = root->info;
            file << text <<" , ";
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
  	file.open ("E:\\MCA VNSGU\\102-OOP\\Assignment\\practical\\PS3\\11_7op.txt", ios::out | ios::in );
	BinaryTree<string> str_bt;
	cout<<"String Binary Tree : "<<endl;
    text = "String Binary Tree : ";
    file << text <<endl;
	file << endl;
	str_bt.insert("Mango");
	str_bt.insert("Cat");
	str_bt.insert("Apple");
	str_bt.insert("Tiger");
	str_bt.insert("Sun");
	str_bt.insert("Egg");
	cout<<endl;
	cout<<"Inorder Travasal :  ";
	text = "Inorder Travasal :  ";
    file << text ;
	str_bt.printTree(0);
	file << endl;
	cout<<endl;
	cout<<"Preorder Travasal :  ";
	text = "Preorder Travasal :  ";
    file << text ;
	str_bt.printTree(-1);
	file << endl;
	cout<<endl;
	cout<<"Postorder Travasal :  ";
	text = "Postorder Travasal :  ";
    file << text ;
	str_bt.printTree(1);
	file << endl;
	cout<<endl;
	cout<<"-------------------------------------------------------"<<endl;
	text = "-------------------------------------------------------";
    file << text<<endl ;
    BinaryTree<char> char_bt;
	cout<<"Charatar Binary Tree : "<<endl;
    text = "Charatar Binary Tree : ";
    file << text <<endl;
	file << endl;
	char_bt.insert('M');
	char_bt.insert('C');
	char_bt.insert('A');
	char_bt.insert('T');
	char_bt.insert('S');
	char_bt.insert('E');
	cout<<endl;
	cout<<"Inorder Travasal :  ";
	text = "Inorder Travasal :  ";
    file << text ;
	char_bt.printTree(0);
	file << endl;
	cout<<endl;
	cout<<"Preorder Travasal :  ";
	text = "Preorder Travasal :  ";
    file << text ;
	char_bt.printTree(-1);
	file << endl;
	cout<<endl;
	cout<<"Postorder Travasal :  ";
	text = "Postorder Travasal :  ";
    file << text ;
	char_bt.printTree(1);
	file << endl;
	cout<<endl;
	cout<<"-------------------------------------------------------"<<endl;
	text = "-------------------------------------------------------";
    file << text<<endl ;
	file.close();
	return 0;
}
