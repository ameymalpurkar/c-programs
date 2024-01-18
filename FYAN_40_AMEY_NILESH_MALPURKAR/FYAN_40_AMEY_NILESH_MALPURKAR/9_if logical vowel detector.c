#include<stdio.h>

void main(){
	char alphabet;
	printf ("enter an alphabet: \n");
	scanf("%s",&alphabet);
	
	if(alphabet == 'a' || alphabet == 'e' ||alphabet == 'i' || alphabet == 'o' || alphabet == 'u' || alphabet == 'A' || alphabet == 'E' ||alphabet == 'I' || alphabet == 'O' || alphabet == 'U')
	{
		printf("this alphabet is vowel");
	}
	else
	{
		printf("this alphabet is not vowel");
		
	}
}
