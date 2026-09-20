#include<stdio.h>
#include<conio.h>
void main()
{
    int i,n,sum;
    printf("Sum of natural numbers upto: ");
    scanf("%d",&n);
    for(i=0; i<=n; i++);
    {
        sum=i+(i+1);
        i=sum;
    }

    printf("The sum of natural numbers upto %d is %d",n,sum);
    getch();
}