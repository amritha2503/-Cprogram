#include<stdio.h>
#include<conio.h>
int main()
{
	int x,y;
	printf("\t\t\tSwapping of two numbers");
	printf("\nEnter 'x' and 'y' values:");
	scanf("%d%d",&x,&y);
	x=x+y;
	y=x-y;
	x=x-y;
	printf("\nNumbers after swapping\nx=%d\ny=%d",x,y);
	return 0;
}
