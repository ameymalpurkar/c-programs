#include <stdio.h>

void main(){
	char shape;
	printf("enter the shape: ");
	scanf("%c",&shape);
	
	if(shape == 's'){
		int len;
		int area;
		int perimeter;
	
		printf("enter the length of square:\n");
		scanf("%d",&len);
	
		area = len*len;
		printf("area of square is = %d:\n", area);
	
		perimeter = 4*len;
		printf("perimeter of square is = %d \n", perimeter);
	}
	
	else if(shape  == 'r'){
		int length;
		int width ;
		int area;
		int perimeter;
		
		printf("enter the length of rectangle:");
		scanf("%d",&length);
		
		printf("enter the width of rectangle:");
		scanf("%d",&width);
		
		area = length*width; 
		printf("area of rectangle is %d \n", area);
		
		perimeter = 2*(length + width);
		printf("perimeter of rectangle is %d \n", perimeter);
	}
	else{
		printf("your shape is not valid");
	}
}


