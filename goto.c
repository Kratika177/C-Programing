#include <stdio.h>
int main(){
	int n;
	int i=0;
	printf("Enter number\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
	    if(i==4){
	    	goto end;
		
		}
		if(i==7){
			break;	
		}
		printf("%d\n",i);
	}
	end:
		printf("end\n"); 
	return 0;
}
