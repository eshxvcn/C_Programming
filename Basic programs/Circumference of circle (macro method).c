#include<stdio.h>
#include<conio.h>
#define PI 3.14
void main()
{
    int r;
    float c;
    printf("enter the value of r");
    scanf("%d",&r);
    c=2*PI*r;
    printf("The circumference of the circle is%f",c);
    getch();
}