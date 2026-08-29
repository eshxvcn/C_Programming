#include<stdio.h>
#include<conio.h>
void main()
{
    int s;
    float A;
    printf("enter the value of side s");
    scanf("%d",&s);
    A=((sqrt(3))/4*s*s);
    printf("The area of the equilateral triangle is %f",A);
}