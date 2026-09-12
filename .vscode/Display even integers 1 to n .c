#include<stdio.h>
#include<conio.h>
void main()
{
    int i,n;
    printf("enter the value of n");
    scanf("%d",&n);
    for(i = 1; i <= n; i%2==0) i++;
    printf("%d ",i);
    getch();
}