#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b,c,d;
    printf("enter the values of a,b,c and d");
    scanf("%d,%d,%d,%d",&a,&b,&c,&d);
    if (a>b && a>c && a>d)
    printf("%d is greatest of a,b,c and d",a);
    else if(b>a && b>c && b>d)
    printf("%d is greatest of a,b,c and d",b);
    else if(c>a && c>b && c>d)
    printf("%d is greatest of a,b,c and d",c);
    else if(d>a && d>b && d>c)
    printf("%d is greatest of a,b,c and d",d);
    getch();
}