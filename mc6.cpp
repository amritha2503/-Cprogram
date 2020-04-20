#include<stdio.h>
#include<math.h>
int sumofdigits(int n);
 
 int main()
{
	int num,sum;
	printf("Enter any number: ");
	scanf("%d",&num);
	sum = sumofdigits(num);
	printf("\nSum of digits of %d is %d",num,sum);
	return 0;
}
int sumofdigits(int n)
 {
 
	 if(n==0)
	   return 0;
	return(n%10 + sumofdigits(n/10));
	
}
