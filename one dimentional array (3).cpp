#include<stdio.h>
main(){
	int i, marks[6], sum=0;
	float per;
	for(i=0;i<6;i++)
	{
		printf("enter sub %d marks",i+1);
		scanf("%d",&marks[i]);
	}
	for(i=0;i<6;i++)
	{
		sum=sum+marks[i];
		}
		per=(float)(sum/600.0)*100;
		printf("the total is %d\n",sum);
		printf("the percentage is %f",per);
	}

