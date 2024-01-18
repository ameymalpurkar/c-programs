#include<stdio.h>

void main()
{
	int a, i , fg = 0;
	
    printf("enter no\n");
    scanf("%d",&a);
    for(i=2;i<a;i++)
    {
        if (a%i == 0){
            fg = fg +1 ; 
        }
    }
    if (fg == 0){
        printf("number is prime\n");
    }
    else{
        printf("number is not prime\n");
    }
}

