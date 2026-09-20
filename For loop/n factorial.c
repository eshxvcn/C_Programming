#include<stdio.h>
#include<conio.h>
void main()
{
    int i,n,f;
    printf("Factorial of: ");
    scanf("%d",&n);
    for(i=1; i<=n; i++);
    {
        f=i*(i+1);
        i=f;
    }

    printf("%d! is %d",n,f);
    getch();
}