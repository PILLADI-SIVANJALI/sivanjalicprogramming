#include<stdio.h>
void addition();
main(){
	addition();
	addition();
	addition();
}
void addition(){
	int a,b,c;
	printf("enter 2 values");
	scanf("%d%d",&a,&b);
	c=a+b;
	printf("the sum is %d",c);
}
