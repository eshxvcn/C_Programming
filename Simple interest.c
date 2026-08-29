#include<stdio.h>
#include<conio.h>
void main()
{
    float p,t,r,SI;
    printf("enter the values of p,t and r"),
    scanf("%f,%f,%f",&p,&t,&r);
    SI=(p*t*r)/100;
    printf("The simple interest calculated is %f",SI);
    getch();
}