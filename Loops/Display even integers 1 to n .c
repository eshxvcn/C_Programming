#include<stdio.h>
#include<conio.h>
void main()
{
    int i,n;
    printf("enter the value of n: ");
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        if (i%2==0)
        printf("%d\n",i);
    }
    getch();
}