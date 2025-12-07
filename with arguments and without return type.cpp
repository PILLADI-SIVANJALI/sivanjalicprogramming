#include<stdio.h>
void addition(int,int);
int main(){
	int a,b;
	printf("enter two number");
	scanf("%d %d",&a,&b);
	addition(a,b);
}
    void addition (int x,int y){
	
    int c;
    c=x+y;
    printf("the result is %d",c);
  
   }
