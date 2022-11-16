//Name : Chandani singh 
//Roll no: 124

#include<stdio.h>
int main()
{
	int i,j,n,count=0;
	printf("Enter positive Number N : ");
	scanf("%d",&n);
	printf("Prime Numbers from 1 to N :\n");
	if(n>=1)
	{
		for(i=1;i<n;i++)
		{
			count = 0;
			for(j=2;j<i;j++)
			{
				if(i%j == 0)
				{
					count++;
					break;
				}
			}
			if(count == 0)
			{
				printf("\t%d",i);
			}
		}
	}
	else
	{
		printf("\nPlease Enter Valid Positive Number..");
	}
	return 0;
}