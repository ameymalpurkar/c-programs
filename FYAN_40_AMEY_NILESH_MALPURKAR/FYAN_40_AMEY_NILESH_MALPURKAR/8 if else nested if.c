#include <stdio.h>

void main(){
	int a,b;
	printf("enter two numbers a , b :");
	scanf("%d %d",&a,&b);
	
	if(a>b)
	{
		printf ("%d is greater than %d",a,b);
	}
	else if(a==b)
	{
		printf("%d is equal to %d",a,b);
	}
	else if(a<b)
	{
		printf("%d is not greater than %d",a,b);
	}
	else if (a!=b)
	{
		printf("%d is not equal to %d",a,b);
	}
	else
	{
		printf("your input is invalid");
	}
	
	
}
