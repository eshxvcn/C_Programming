#include<stdio.h>
#include<conio.h>
void main()
{
    int a;
    printf("enter the values of a");
    scanf("%d",&a);
    if(a%2==0)
    printf("%d is an even number",a);
    else printf("%d is an odd number",a);
    getch();
}