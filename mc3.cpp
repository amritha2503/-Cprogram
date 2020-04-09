#include<stdio.h>
#include<conio.h>
int main()
{
	int marks;
	printf("\t\t\tGrade Report");
	printf("\nEnter the student's mark:");
	scanf("%d",&marks);
	if(marks>=85&&marks<=100)
	 printf("\nGrade A");
	else if(marks>=70&&marks<=84)
	 printf("\nGrade B");
	else if(marks>=55&&marks<=69)
	 printf("\nGrade C");
	else if(marks>=40&&marks<=54)
	 printf("\nGrade D");
	else if(marks>=0&&marks<=39)
	 printf("\nGrade F");
	else
	 printf("\nInvalid Input");
	return 0;
}
