#include <stdio.h>
int fact(int a){
    if(a==1){
    	return 1;
	}
	else{
	    return a*fact(a-1); 		
	}

}
int main(){
	printf("factorial of 5 is %d ",fact(5));
return 0; 	
}
