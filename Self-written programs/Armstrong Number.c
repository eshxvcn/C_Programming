#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
   int n,r,p,CP,sum;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    CP=n;

    for(p=0; n>0; n=n/10)
    {
        r=n%10;
        p=p+1;
    }

    n=CP;

    for(sum=0; n>0; n=n/10)
    {
        r=n%10;
        sum=(sum+(pow(r, p)));
    }

    if(sum==CP)
    printf("%d is an Armstrong Number",CP);
    else
    printf("%d is not an Armstrong Number",CP);


    getch();

}  