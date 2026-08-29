#include <stdio.h>
#include <conio.h>
void main()
{
    int a,n, count = 0;
    printf("enter the value of a");
    scanf("%d", &a);
    for(n = 1; n <= a; n++)
    {
        if(a%n==0)
        {
            count++;
        }
    }
    if(count==2)
    {
        printf("%d is a prime number",a);
    }
    else
    {
        printf("%d is not a prime number",a);
    }
    getch();
}