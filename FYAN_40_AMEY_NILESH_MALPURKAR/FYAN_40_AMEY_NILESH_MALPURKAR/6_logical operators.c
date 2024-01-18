#include <stdio.h>

void main(){
	int a,b,c ;
	printf("enter two numbers a,b,c :");
	scanf("%d %d %d",&a,&b,&c);
	
	if(a>c && c<b )
	{
		printf ("condition is fulfilled");
	}
	else
    {
		printf("condition is not fullfilled");
	}
}
