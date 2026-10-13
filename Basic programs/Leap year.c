#include<stdio.h>
#include<conio.h>
void main()
{
    int a;
    printf("enter the value of a");
    scanf("%d",&a);
    if(a%4==0)
    printf("%d is a leap year",a);
    else printf("%d is not a leap year",a);
    getch();
}