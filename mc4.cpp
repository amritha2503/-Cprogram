#include<stdio.h>
#include<conio.h>
int main()
{
	int ch;
	printf("Enter your choice:");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:
			printf("\nFood item - Burger\nPrice - Rs 129");
			break;
		case 2:
			printf("\nFood item - French Fries\nPrice - Rs 99");
			break;
		case 3:
			printf("\nFood item - Pasta\nPrice - Rs 179");
			break;
		case 4:
			printf("\nFood item - Pizza\nPrice - Rs 239");
			break;
		case 5:
			printf("\nFood item - Sandwich\nPrice - Rs 149");
			break;
		default:
			printf("\nInvalid choice");
			
	}
return 0;
}
