#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
    int s,x,y,z;
    float A;
    printf("enter the values of sides x,y, and z");
    scanf("%d,%d,%d",&x,&y,&z);
    s=(x+y+z)/2;
    A=sqrt((s-x)*(s-y)*(s-z));
    printf("The area of the scalene triangle is %f",A);
    getch();
}