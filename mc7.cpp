#include<stdio.h>
#include<conio.h>
int prime(int n);

int main()
{
	int num,result;
	printf("Enter a number:");
	scanf("%d",&num);
	result=prime(num);
    if(num==1)
    {
    	printf("\nOne is not a prime number");
	}
         
    else if(result==1)
		  printf("\n%d is a prime number",num);
    else 
      {
 	   printf("\n%d is not a prime number",num);
       return 0;
      }
   
}
int prime(int n)
{
	int i;
	for(i=2;i<=n-1;i++)
	{
		if(n%i==0)
		return 0;
	}
	return 1;
}
