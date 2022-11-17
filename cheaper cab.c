#include <stdio.h>

int main(void) {
	// your code goes here
	int t,x,y;
	scanf("%d",&t);
	for(int i=0;i<t;i++){
	    scanf("%d",&x);
	    scanf("%d",&y);
	    if(x<y){
	        printf("FIRST\n");
	    }
	    else if(x>y){
	        printf("SECOND\n");
	    }
	    else{
	        printf("ANY\n");
	    }
	}
	return 0;
}

