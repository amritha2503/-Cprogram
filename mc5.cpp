#include<stdio.h>
#include<conio.h>
int main()
{
	int i,j,n;
	printf("\nEnter the number of stairs:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
	for(j=0;j<=i;j++)
    	{
		printf("01");
        }
       printf("\n");   
	}
	return 0;
}
