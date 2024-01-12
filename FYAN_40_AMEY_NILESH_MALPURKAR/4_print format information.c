#include<string.h>

void main(){
	char fname[20],mname[20],lname[20];
	int roll_no;
	char branch[20];
	
	printf("Enter Your name:");
	scanf("%s %s %s",&fname,&mname,&lname);
	
	printf("Enter your roll_no:");
	scanf("%d",&roll_no);
	
	printf("Enter your branch:");
	scanf("%s",&branch);
	
	printf("name    : %s %s %s\n",fname,mname,lname);
	printf("roll_no : %d\n",roll_no);
	printf("branch  : %s",branch);
}
