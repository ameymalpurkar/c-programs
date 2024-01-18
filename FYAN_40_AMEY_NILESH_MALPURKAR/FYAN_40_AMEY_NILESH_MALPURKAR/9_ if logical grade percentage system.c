#include<stdio.h>

void main(){
	char grade;
	int percent;
	printf ("enter your percentage: \n");
	scanf("%d",&percent);
	
	if(percent <40 )
	{
		printf("GRADE : FAIL");
	}
	
	else if (percent >= 40 && percent <55) 
	{
		printf(" GRADE : PASS");
	}
	
	else if (percent >= 55 && percent < 60) 
	{
		printf("GRADE : B");
	}
	
	else if (percent >= 60 && percent < 75) 
	{
		printf("GRADE : A");
	}
	
	else{
		printf("GRADE : DISTINCTION");
	}
}
