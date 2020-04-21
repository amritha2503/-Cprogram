	#include<stdio.h>
	int main()
	{
		int a[3][3],i,j;
		printf("Enter 9 elements...");
		for(i=0;i<3;i++)
    	{
		for(j=0;j<3;j++)
		{
		scanf("%d",&a[i][j]);
	}
}
		
	int k,l,s=0;
    printf("\nThe 3x3 array is \n");
	for(k=0;k<3;k++)
	{
		for(l=0;l<3;l++)
	
	   printf("%d",*(*(a+k)+l));
	   printf("\n");
	}
	
	for(i=0;i<3;i++)
	{
	for(j=0;j<3;j++)
	{
	if(i==j)	
    s=s+a[i][j];
	}
	}
	for(i=0;i<3;i++)
	{
	for(j=0;j<3;j++)
	{
	printf("\nThe sum of diagonal elements is %d",s);
	return 0;
    }
}
}
