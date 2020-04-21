#include <stdio.h>
 
int lcm(int x, int y);
 
int main()
{
    int a, b, result;
    printf("Enter two numbers:");
    scanf("%d%d", &a, &b);
    result = lcm(a, b);
    printf("The LCM of %d and %d is %d\n", a, b, result);
    return 0;
}
 
int lcm(int x, int y)
{ 
    static int c = 1;
 
    if ((c%x==0)&&(c%y==0))
    {
        return c;
    }
    c++;
    lcm(x, y);
    return c;
}
