#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b,c;
    printf("enter the values of a,b and c");
    scanf("%d,%d,%d",&a,&b,&c);
    if(a>b)
    {
        if(a>c)
        printf("%d is the greatest of a,b and c", a);
        else
        printf("%d is the greatest of a,b and c", c);
    }
    else
    {
        if(b>c)
        printf("%d is the greatest of a,b and c", b);
        else
        printf("%d is the greatest of a,b and c", c);
    }
    getch();
}