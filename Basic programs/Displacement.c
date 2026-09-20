#include<stdio.h>
#include<conio.h>
void main()
{
    int s,u,a,t;
    printf("enter the values of u,a,t");
    scanf("%d,%d,%d",&u,&a,&t);
    s=(u*t)+(a*t*t)/2;
    printf("The Displacement is %d", s);
    getch();
}