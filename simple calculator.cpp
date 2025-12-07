//simple calculator using switch
#include<stdio.h>
main(){
	int a, b;
	printf("enter two numbers");
	scanf("%d%d",&a,&b);
	char OP;
	printf("enter any arithematic operator");
	scanf("%c",&OP);
    switch(OP)	
	{

		case'+':
			printf("%d",a+b);
			break;
		case'-':
		    printf("%d",a-b);
			break;
		case'/':
			printf("%d",a/b);
			break;
		case'%':
		    printf("%d",a%b);
			break;
		case'*':
		    printf("%d",a*b);
			break;
		default:printf("invalid option");
	}
	}
