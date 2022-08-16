#include <stdio.h>
int main(){
	int n;
	int i=0;
	printf("Enter number\n");
	scanf("%d",&n);
	do{
		i=i+1;
		printf("%d\n",i);
	}while(i<=n);
	return 0;
}
