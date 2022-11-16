//Name : Chandani singh 
//Roll no: 124

#include<stdio.h>
int main()
{
	long n1,n2,lcm,hcf,max;
	printf("Enter two positive Numbers : ");
	scanf("%ld %ld",&n1,&n2);
	if(n1>=0 && n2>=0)
	{
		max = (n1>n2) ? n1 : n2;
		if(n1==0 || n2==0)
		{
			lcm = hcf = max;
		}
		else
		{
			do
			{
				if(max % n1 == 0 && max % n2 == 0)
				{
					lcm = max;
					break;
				}
				else
				{
					max++;
				}
			}while(1);
			hcf = (n1*n2)/lcm;
		}
		printf("\nHCF : %ld",hcf);
		printf("\nLCM : %ld",lcm);
	}
	else
	{
		printf("\nPlease Enter Valid Positive Number..");
	}
	return 0;
}