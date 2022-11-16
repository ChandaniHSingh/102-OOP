/*
Roll No : 124
Name : Singh Chandani Harendra

9. Use the program of problem no. 8 to store the data in a data file. Give appropriate options for data manipulations.

*/
#include<iostream>
#include<fstream>
#include<string>
using namespace std;

fstream file;
string text;
int num;
struct node {
   int rollno;
   string name;
	int age;
   node *next;
};
class Linklist{
	public :
	// head pointer
	node* head = NULL;
	
	bool isEmpty(){
		if(head==NULL)
		    return true;
		else
		    return false;
	}
	
	
	node* newNode(int rollno,string name,int age)
	{
	    /* allocate node */
	    node* nn = new node();
	  	nn->rollno = rollno;
	    nn->name = name;
	    nn->age = age;
	    nn->next = NULL;
	    return nn;
	}
	Linklist operator + (node* nn)
	//void sortedInsert(node* nn)
	{
	    node* temp;
	    if(head == NULL || head->age > nn->age) {
	    	nn->next = head;
	    	head = nn;
	        cout<<"\nNode Inserted at First..."<<endl;
	   	}
	    else {
	        temp = head;
	        while (temp->next != NULL && temp->next->age < nn->age) {
	            temp = temp->next;
	        }
	        nn->next = temp->next;
	        temp->next = nn;
	    }
	    return *this;
	}
	void display() {
	
	    if(isEmpty()) {
	    	cout<<"\nList is Empty..."<<endl;
	        text = "List is Empty...";
	        file <<endl<<text<<endl;
	    } 
	    else {
			struct node *temp = new node;
	    	temp = head;
	    	cout<<"\nDisplay : "<<endl;
	        text = "Display : ";
	        file <<endl<<text<<endl;
	    	while(temp != NULL)
	        {
	        	cout<<"---------------------"<<endl;
		        text = "---------------------";
		        file <<endl<<text<<endl;
	            cout<<"Rollno : "<<temp->rollno<<endl;
		        text = "Rollno : ";
		        file <<endl<<text;
		        num = temp->rollno;
		        file <<num<<endl;
	            cout<<"Name : "<<temp->name<<endl;
		        text = "Name : ";
		        file <<endl<<text;
		        text = temp->name;
		        file <<text<<endl;
	            cout<<"Age : "<<temp->age<<endl;
		        text = "Age : ";
		        file <<endl<<text;
		        num = temp->age;
		        file <<num<<endl;
	            cout<<"---------------------"<<endl;
		        text = "---------------------";
		        file <<endl<<text<<endl;
	            temp = temp->next;
	      	}
	      
	   	}
	}
};

int main()
{
	file.open ("E:\\MCA VNSGU\\102-OOP\\Assignment\\practical\\PS3\\9op.txt", ios::out | ios::in );
   int rollno,age;
   string name;
   int ch=0,c=0;
   Linklist l;
   node* nn=NULL;
   while(c!=3){
        cout<<"\n=================";
        cout<<"\nOptions";
        cout<<"\n=================";
        cout<<"\n1 - Insert";
        cout<<"\n2 - Display";
        cout<<"\n3 - Exit";
        cout<<"\nEnter Your Choice : ";
        cin>>c;
        switch(c){
            case 1:
            	cout<<"Enter rollno :";
				cin>>rollno;
				cout<<"Enter NAme : ";
				cin>>name;
				cout<<"Enter Age : ";
				cin>>age;
			    nn = l.newNode(rollno,name,age);
			    //sortedInsert(nn);
			   	l = l+nn;
                break;
            case 2:
                if(l.isEmpty()){
                	cout<<"\nList is Empty...."<<endl;
			        text = "List is Empty....";
			        file <<endl<<text<<endl;
                    break;
                }
				l.display();
                break;
            case 3:
            	exit(0);
                break;
            default:
                cout<<"\nPlease enter valid choice...."<<endl;
            	break;
      	}
   	}
	file.close();
    return 0;
}
