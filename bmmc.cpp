#include <stdio.h>
#include<string.h>
#include<stdlib.h>
char code[10]="6467";  //*Set Passcode of your choice//*
int n, choice, account_no, amount, index,pass;
struct user
{
    int account_no;
    int amount;
    int pin;
    char name[80];
    int balance;
};
struct user data[20];
void newac(struct user[], int);
void display(struct user[], int);
int search(struct user[], int, int);
void deposit(struct user[], int, int, int);
void withdraw(struct user[], int, int, int);
void auth();


int main()
{
    
    int i=0;


    printf("\t\t\tBankManagement System\n\n");
    printf("Number of user accounts? : ");
    scanf("%d", &n);
    newac(data, n);
    do
    {

        printf("\n\nBanking System Menu :\n");
        printf("Press 1 to display all records.\n");
        printf("Press 2 to search for a record.\n");
        printf("Press 3 to deposit amount.\n");
        printf("Press 4 to withdraw amount.\n");
        printf("Press 0 to exit\n");
        printf("\nEnter choice(0-4) : ");
        scanf("%d", &choice);
        switch (choice)
        {
            case 1:
                display(data, n);
                break;
            case 2:
                printf("Enter account number to search : ");
                scanf("%d", &account_no);
                index = search(data, n, account_no);
                if (index ==  - 1)
                {
                    printf("Record not found : ");
                }
                else
                {
                    printf("A/C Number: %d\nName: %s\nBalance: %d\n",
                        data[index].account_no, data[index].name,
                        data[index].balance);
                }
                break;
            case 3:
                printf("Enter account number : ");
                scanf("%d", &account_no);
                index = search(data, n, account_no);
                if (index ==  - 1)
                {
                    printf("Record not found ");
                     main();
                }
			    else
				printf("Enter amount to deposited :");
                scanf("%d", &amount);
                deposit(data, n, account_no, amount);
               
                printf("\n---------Deposit Successful!----------");
               
            
                break;
            case 4:
                printf("Enter account number : ");
                scanf("%d", &account_no);
                index = search(data, n, account_no);
                if (index ==  - 1)
                {
                    printf("Record not found  ");
                   main();
                }
                else
                auth();
				withdraw(data, n, account_no, amount);
				
        }
    }
    while (choice != 0);

    return 0;
}

void newac(struct user list[80], int s)
{
    int i;
    for (i = 0; i < s; i++)
    {
        printf("\nEnter data for Record %d:", i + 1);

        printf("\nEnter account_no : ");
        scanf("%d", &list[i].account_no);
        fflush(stdin);
        printf("Enter name : ");
        gets(list[i].name);
        list[i].balance = 0;
    } 
}

void display(struct user list[80], int s)
{
    int i;

    printf("\n\nA/C No\tName\tBalance\n");
    for (i = 0; i < s; i++)
    {
        printf("%d\t%s\t%d\n", list[i].account_no, list[i].name,
            list[i].balance);
    } 
}

int search(struct user list[80], int s, int number)
{
    int i;

    for (i = 0; i < s; i++)
    {
        if (list[i].account_no == number)
        {
            return i;
        } 
    }
    return  - 1;
}

void deposit(struct user list[], int s, int number, int amt)
{
    int i = search(list, s, number);
    if (i ==  - 1)
    {
        printf("Record not found");
    } 
    else
    {
        list[i].balance += amt;
    }
}

void withdraw(struct user list[], int s, int number, int amt)
{
    int i = search(list, s, number);
    if (i ==  - 1)
    {
        printf("Record not found\n");
    } 
    else if (list[i].balance < amt)
    {
        printf("Insufficient balance\n");
    }
    else
    {
        list[i].balance -= amt;
        printf("\n-----------Withdrawal successful--------------");
            
    }
}
void auth()
{
char passcode[10];
int i=0;

    printf("\n\n\t\tEnter the code to login:");
    scanf("%s",passcode);
     if(strcmp(passcode,code)==0)
        {
		printf("\n\n----------LOGIN SUCCESSFUL!----------------");
        printf("\nEnter amount to withdraw : ");
        scanf("%d", &amount);
       }

        else
        
		{
		  printf("\n\nWrong password!!\t\t\tTRY AGAIN\a\a\a");
		  exit(0);
		 }

}
