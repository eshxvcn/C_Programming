#include<stdio.h>
#include<conio.h>
void main()
{
    int v,u,a,t;
    printf("enter the values of u,a and t");
    scanf("%d,%d,%d",&u,&a,&t);
    v=u+a*t;
    printf("The velocity is %d",v);
    getch();
}