#include <stdio.h>
int main(){
	int grade;
	printf("Enter your grade\n");
	scanf("%d",&grade);
	switch(grade){
		case 5:printf("Excellent\n");
		break;
		case 4:printf("Keep it up \n");
		break;
		case 3:printf("fine\n");
		break;
		default:printf("practice more");
	}
	return 0;
}
