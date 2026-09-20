#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b;
    printf("enter the values of a and b");
    scanf("%d,%d",&a,&b);
    {
        if(a>b)
        printf("%d is the greatest of a and b",a);
        else
        printf("%d is the greatest of a and b",b);
    }
 getch();
}