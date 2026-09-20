#include<stdio.h>
#include<conio.h>
void main()
{
   int n,r,sum;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    for(sum=0; n/10!=0; n=n/10)
    {
        r=n%10;
        sum=sum+r;
    }
    printf("The sum of all the digits in %d is %d",n,sum);


    getch();

}  