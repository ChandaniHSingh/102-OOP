/*
Roll No : 124
Name : Singh Chandani Harendra

3. Create a class HugeInteger that uses a 40-element array of digits to store integers as large as 40-digits each. Provide member methods inputHugeInteger, outputHugeInteger, addHugeIntegers and substractHugeIntegers. For comparing HugeInteger objects, provide methods isEqualTo, isNotEqualTo, isGreaterThan, isLessThan, IsGreaterThanOrEqualTo and isLessThanOrEqualTo--each of these is a “predicate” method that simply returns true if the relationship holds between the two huge integers and returns false if the relationship does not hold. Also provide a predicate method isZero.
*/
#include<iostream>
using namespace std;
class HugeInteger
{
	double hi[40];
	int n;
public:
	HugeInteger(int n1){
		this->n = n1;
	}
	void inputHugeInteger(){
		cout<<"Enter "<<n<<" elements of HugeInteger : "<<endl;
		for(int i=0;i<n;i++){
			cin>>hi[i];
		}
	}
	void outputHugeInteger(){
		for(int i=0;i<n;i++){
			cout<<"  "<<hi[i];
		}
	}
	void addHugeInteger(int k){
		for(int i=0;i<n;i++){
			hi[i]=hi[i]+k;
		}
	}
	void substractHugeInteger(int k){
		for(int i=0;i<n;i++){
			hi[i]=hi[i]-k;
		}
	}
	bool isEqualTo(HugeInteger h){
		for(int i=0;i<n;i++){
			if(this->hi[i] == h.hi[i]){}
			else
			{
				return false;
			}
		}
		return true;
	}
	bool isNotEqualTo(HugeInteger h){
		for(int i=0;i<n;i++){
			if(this->hi[i] != h.hi[i]){}
			else
			{
				return false;
			}
		}
		return true;
	}
	bool isGreaterThan(HugeInteger h){
		for(int i=0;i<n;i++){
			if(this->hi[i] > h.hi[i]){}
			else
			{
				return false;
			}
		}
		return true;
	}
	bool isLessThan(HugeInteger h){
		for(int i=0;i<n;i++){
			if(this->hi[i] < h.hi[i]){}
			else
			{
				return false;
			}
		}
		return true;
	}
	bool isGreaterThanOrEqualTo(HugeInteger h){
		for(int i=0;i<n;i++){
			if(this->hi[i] >= h.hi[i]){}
			else
			{
				return false;
			}
		}
		return true;
	}
	bool isLessThanOrEqualTo(HugeInteger h){
		for(int i=0;i<n;i++){
			if(this->hi[i] <= h.hi[i]){}
			else
			{
				return false;
			}
		}
		return true;
	}
	bool isZero(){
		for(int i=0;i<n;i++){
			if(this->hi[i] == 0){}
			else
			{
				return false;
			}
		}
		return true;
	}
};
int main(){
	int n,k;
	cout<<"enter size of array : ";
	cin>>n;
	HugeInteger h1(n),h2(n);
	char ch;
	int choice;
	do
	{
		cout<<"=============================\n";
		cout<<"\tMENU\n";
		cout<<"=============================\n";
		cout<<"1. inputHugeInteger \n2. outputHugeInteger \n3. addHugeIntegers \n";
		cout<<"4. substractHugeIntegers \n5. isEqualTo \n6. isNotEqualTo \n";
		cout<<"7. isGreaterThan \n8. isLessThan \n9. IsGreaterThanOrEqualTo \n";
		cout<<"10. isLessThanOrEqualTo \n11. isZero \n12.Exit\n";
		cout<<"=============================\n";
		cout<<"Enter your choice : ";
		cin>>choice;
		switch(choice)
		{
			case 1:
				cout<<"H1 : "<<endl;
				h1.inputHugeInteger();
				cout<<endl<<"H2 : "<<endl;
				h2.inputHugeInteger();
				break;
			case 2:
				cout<<"H1 : "<<endl;
				h1.outputHugeInteger();
				cout<<endl<<"H2 : "<<endl;
				h2.outputHugeInteger();
				break;
			case 3:
				cout<<"Enter key value to add : ";
				cin>>k;
				h1.addHugeInteger(k);
				h2.addHugeInteger(k);
				break;
			case 4:
				cout<<"Enter key value to add : ";
				cin>>k;
				h1.substractHugeInteger(k);
				h2.substractHugeInteger(k);
				break;
			case 5:
				cout<<"isEqualTo : ";
				if(h1.isEqualTo(h2)){
					cout<<"True"<<endl;
				}
				else{
					cout<<"False"<<endl;
				}
				break;
			case 6:
				cout<<"isNotEqualTo : ";
				if(h1.isNotEqualTo(h2)){
					cout<<"True"<<endl;
				}
				else{
					cout<<"False"<<endl;
				}
				break;
			case 7:
				cout<<"isGreaterThan : ";
				if(h1.isGreaterThan(h2)){
					cout<<"True"<<endl;
				}
				else{
					cout<<"False"<<endl;
				}
				break;
			case 8:
				cout<<"isLessThan : ";
				if(h1.isLessThan(h2)){
					cout<<"True"<<endl;
				}
				else{
					cout<<"False"<<endl;
				}
				break;
			case 9:
				cout<<"isGreaterThanOrEqualTo : ";
				if(h1.isGreaterThanOrEqualTo(h2)){
					cout<<"True"<<endl;
				}
				else{
					cout<<"False"<<endl;
				}
				break;
			case 10:
				cout<<"isLessThanOrEqualTo : ";
				if(h1.isLessThanOrEqualTo(h2)){
					cout<<"True"<<endl;
				}
				else{
					cout<<"False"<<endl;
				}
				break;
			case 11:
				cout<<"H1 isZero : ";
				if(h1.isZero()){
					cout<<"True"<<endl;
				}
				else{
					cout<<"False"<<endl;
				}
				cout<<"H2 isZero : ";
				if(h2.isZero()){
					cout<<"True"<<endl;
				}
				else{
					cout<<"False"<<endl;
				}
				break;
			case 12:
				exit(0);;
		}
		cout<<"\nDo you want to continue(y/n) : \n";
		cin>>ch;
	}while(ch=='y' || ch=='Y');
	return 0;
}
