//Name : Chandani singh 
//Roll no: 124

#include<stdio.h>
long fact(long n)
{
	if(n>1)
	{
		return (n * fact(n-1));
	}
	else
	{
		return 1;
	}
}
int main()
{
	long n;
	printf("Enter One Positive Number N : ");
	scanf("%ld",&n);
	if(n<1)
	{
		printf("Please Enter valid Positive Number...");
	}
	else
	{
		printf("Factorial : %ld",fact(n));
	}
	return 0;
}