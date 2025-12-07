#include<stdio.h>
main(){
	int a, b, sum;
	float average;
	printf("enter the numbers");
	scanf("%d%d",&a,&b);
	sum=a+b;
	average=(float)sum/2;
	printf("the sum of %d and %d is %d\n",a,b,sum);
	printf("the average of %d and %d is %.2f\n",a,b,average);
}
	
