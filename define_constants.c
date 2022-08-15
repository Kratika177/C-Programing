#include <stdio.h>
#define PI 3.14
int main(){
	const float b=20.578484373;
	//b=9;// we cannot do this bcz b is constant !!!!ERROR
    printf("Value of b is %8.2f\n",b,"\n");
    printf("The value of pi is %3.2f",PI);
    return 0;
}
