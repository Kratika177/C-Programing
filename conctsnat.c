#include <stdio.h>
int main(){
	const float b=20.578484373;
	//b=9;// we cannot do this bcz b is constant !!!!ERROR
    printf("Value of b is %8.2f\n",b,"\n");
    return 0;
}
