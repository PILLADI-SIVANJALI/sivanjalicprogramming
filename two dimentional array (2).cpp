#include<stdio.h>
main(){
	int i,j;
	int matrix[2][3];
	printf("enter 6 elements:\n");
	for(i=0;i<=1;i++)
	{
		for(j=0;j<=2;j++)
		{
			scanf("%d",&matrix[i][j]);
			printf("%d\t",matrix[i][j]);
		}
		printf("\n");
	}
}
