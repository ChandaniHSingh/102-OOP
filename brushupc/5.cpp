//Name : Chandani singh 
//Roll no: 124

#include<stdio.h> 
#include<stdlib.h>
int main(){  
	int i,n;
	int *a=NULL;
	printf("N : ");    
	scanf("%d",&n);
	a = (int*) malloc(n*sizeof(int));
	printf("Enter %d numbers : \n",n);    
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}		
	printf("Numbers are :\n");    
	for(i=0;i<n;i++)    
	{    
		printf("%d\t",a[i]);
	}   
	free(a); 
	return 0;  
}  
