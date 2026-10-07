#include<stdio.h>
#include<conio.h>
void main()
{
    int i,n,f,CP;
    printf("Factorial of: ");
    scanf("%d",&n);
    CP=n;
    for(i=n-1; i!=0; i--)
    {
        f=n*i;
        n=f;
    }

    printf("%d! is %d",CP,n);
    getch();
}