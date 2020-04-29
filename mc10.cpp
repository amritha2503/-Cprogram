#include<stdio.h>
void display();
int i;
struct employee{
    int empno;
    char empname[20];
    char deptname[20];
    float salary;
} e[20];
int main()
{
    int disp;
	printf("Enter information of employees:\n");
	    for (i = 1; i<=2; i++) //change 2 to 20 for 20 employees//
       {
	    e[i].empno=i;
	    printf("\nFor employee number%d :\n", e[i].empno);
        printf("Enter name           : ");
        scanf("%s", e[i].empname);
		printf("Enter department name: ");
        scanf("%s", e[i].deptname);
        printf("Enter salary         :RS. ");
        scanf("%f", &e[i].salary);
       }
    display();
    return 0;
}
void display()
{
    for(i=1;i<3;i++) //*change 3 to 20 for 20 employees*//
    printf("\nDetails of Employee No %d are \n\n\tName       : %s\n\tDepartment : %s\n\tSalary     :RS.%f\n",i,e[i].empname,e[i].deptname,e[i].salary);
}



