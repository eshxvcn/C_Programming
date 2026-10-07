#include<stdio.h>
#include<conio.h>
void main()
{
   int n,r,CP,sum;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    CP=n;
    
    for(sum=0; n>0; n=n/10)
    {
        r=n%10;
        sum=sum+r;
    }
    printf("The sum of all the digits in %d is %d",CP,sum);


    getch();

}  