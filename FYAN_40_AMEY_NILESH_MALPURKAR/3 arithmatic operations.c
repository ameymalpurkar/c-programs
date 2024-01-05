#include<stdio.h>


int main(){
	float n1,n2;
	float sum ;
	float difference;
	float product ;
	float quotient; 
	printf("enter the first number\t");
	scanf("%f",&n1);
	
	printf("enter the second number\t");
	scanf("%f",&n2);
	
//	sum
	sum = n1 + n2;
	printf("sum=%f\n", sum ); 
	
//	subtraction	
	difference = n1 - n2;
	printf("difference = %f\n", difference);
	
//	multiplication
	product = n1 * n2;
	printf("product=%f\n ", product);
	
//	division 
	quotient = n1 / n2;
	printf("quotient=%f\n", quotient);
	
}





