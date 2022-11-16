/*
Roll No : 124
Name : Singh Chandani Harendra

10. For the class Date with properties int month; int day; int year, overload
the following operators.
a. + operator [a+b (a is of date type and b is an integer), use the assumption that all years have 360 days and months 30 days.
b. - operator [a-b(same as above)]
c. = operator [ supporting a=b=c=d]
d. <,<=,>,>=
e. ++, --[post and pre both]
*/
#include<iostream>
using namespace std;
class Date
{
	int day,month,year;
public:
	Date(int D=0,int M=0,int Y=0){
		this->day = D;
		this->month = M;
		this->year = Y;
	}
	Date operator + (int);
	Date operator - (int);
	bool operator < (Date);
	bool operator > (Date);
	bool operator <= (Date);
	bool operator >= (Date);
	void operator ++ ();
	void operator -- ();
	void Print();
};
Date Date::operator +(int k){
	Date t;
	int temp = k % 360;
	int y1 = k / 360;
	int m1 = temp / 30;
	int d1 = temp % 30;
	t.year = this->year + y1;
	t.month = this->month + m1;
	t.day = this->day + d1;
	return t;	
} 
Date Date::operator -(int k){
	Date t;
	int temp = k % 360;
	int y1 = k / 360;
	int m1 = temp / 30;
	int d1 = temp % 30;
	t.year = this->year - y1;
	t.month = this->month - m1;
	t.day = this->day - d1;
	if(t.day >= 1){
	}
	else{
		t.day = 30 + t.day;
		if(t.month >= 1){
		}
		else{
			t.month = 12 + t.month;
			if(y1 == 0)
				t.year = t.year - 1;
			else
				t.year = t.year - y1;
		}
	}
	return t;
} 
bool Date::operator <(Date d){
	if(this->year < d.year){
		return true;
	}
	else if(this->year == d.year){
		if(this->month < d.month){
			return true;
		}
		else if(this->month == d.month){
			if(this->day < d.day){
				return true;
			}
			else{
				return false; 
			}
		}
		else{
			return false; 		
		}
	}
	else{
		return false;
	}
} 
bool Date::operator >(Date d){
	if(this->year > d.year){
		return true;
	}
	else if(this->year == d.year){
		if(this->month > d.month){
			return true;
		}
		else if(this->month == d.month){
			if(this->day > d.day){
				return true;
			}
			else{
				return false; 
			}
		}
		else{
			return false; 		
		}
	}
	else{
		return false;
	}	
} 
bool Date::operator <=(Date d){
	if(this->year <= d.year){
		if(this->month <= d.month){
			if(this->day <= d.day){
				return true;
			}
			else{
				return false; 
			}
		}
		else{
			return false; 		
		}
	}
	else{
		return false;
	}	
} 
bool Date::operator >=(Date d){
	if(this->year >= d.year){
		if(this->month >= d.month){
			if(this->day >= d.day){
				return true;
			}
			else{
				return false; 
			}
		}
		else{
			return false; 		
		}
	}
	else{
		return false;
	}	
} 
void Date::operator ++(){
	if(this->day < 30){
		this->day = this->day + 1;
	}
	else{
		this->day = 1;
		if(this->month < 12){
			this->month = this->month + 1;
		}
		else{
			this->month = 1;
			this->year = this->year + 1;
		}
	}
} 
void Date::operator --(){
	if(this->day != 1){
		this->day = this->day - 1;
	}
	else{
		this->day = 30;
		if(this->month != 1){
			this->month = this->month - 1;
		}
		else{
			this->month = 12;
			this->year = this->year - 1;
		}
	}
} 
void Date::Print()
{
	cout<<this->day<<"/"<<this->month<<"/"<<this->year<<endl;
}
int main()
{
	int D,M,Y,k;
	int choice;
	char ch;
	cout<<"Date format is Day <space> Month <space> Year : "<<endl;
	cout<<"Enter Date 1 : ";
	cin>>D>>M>>Y;
	Date d1(D,M,Y);
	Date d2;
	do
	{
		cout<<"=============================\n";
		cout<<"\tMENU\n";
		cout<<"=============================\n";
		cout<<"1. +\t2. -\t3.=\n4. <\t5. >\t6. <=\n7. >=\t8. ++\t9. --\n10. Print\t11.Exit\n";
		cout<<"=============================\n";
		cout<<"Enter your choice : ";
		cin>>choice;
		switch(choice)
		{
			case 1:
				cout<<"Enter Integer Number to add : ";
				cin>>k;
				d2 = d1+k;		
				break;
			case 2:
				cout<<"Enter Integer Number to subtract : ";
				cin>>k;
				d2 = d1-k;
				break;
			case 3:
				d2 = d1;
				break;
			case 4:
				cout<<"D1 < D2 = ";
				if (d1 < d2){
					cout<<"True"<<endl;
				}
				else{
					cout<<"False"<<endl;
				}
				break;
			case 5:
				cout<<"D1 > D2 = ";
				if (d1 > d2){
					cout<<"True"<<endl;
				}
				else{
					cout<<"False"<<endl;
				}
				break;
			case 6:
				cout<<"D1 <= D2 = ";
				if (d1 <= d2){
					cout<<"True"<<endl;
				}
				else{
					cout<<"False"<<endl;
				}
				break;
			case 7:
				cout<<"D1 >= D2 = ";
				if (d1 >= d2){
					cout<<"True"<<endl;
				}
				else{
					cout<<"False"<<endl;
				}
				break;
			case 8:
				cout<<"Before ++D1 : ";
				d1.Print();
				++d1;
				cout<<"After ++D1 : ";
				d1.Print();
				cout<<"Before ++D2 : ";
				d2.Print();
				++d2;
				cout<<"After ++D2 : ";
				d2.Print();
				break;
			case 9:
				cout<<"Before --D1 : ";
				d1.Print();
				--d1;
				cout<<"After --D1 : ";
				d1.Print();
				cout<<"Before --D2 : ";
				d2.Print();
				--d2;
				cout<<"After --D2 : ";
				d2.Print();
				break;
			case 10:
				cout<<"\nDate 1 :  ";
				d1.Print();
				cout<<"\nDate 2 :  ";
				d2.Print();
				break;
			case 11:
				exit(0);;
		}
		cout<<"\nDo you want to continue(y/n)\n";
		cin>>ch;
	}while(ch=='y' || ch=='Y');
	return 0;
}
