//Name : Chandani singh 
//Roll no: 124

#include<stdio.h> 
#include<string.h>
#include<stdlib.h>
int main(){  
	int i,n;
	char** a=NULL;
	char name[20];
	printf("N : ");    
	scanf("%d",&n);
	a = (char**)malloc(n * sizeof(char*));
	printf("Enter %d names : \n",n);    
	for(i=0;i<n;i++)
	{
		scanf("%s",name);
		a[i] = (char*)malloc(strlen(name) * sizeof(char*));
		strcpy(a[i],name);
	}		
	printf("Names are :\n");    
	for(i=0;i<n;i++)    
	{    
		printf("%s\t",a[i]);
	}   
	free(a); 
	return 0;  
}  
