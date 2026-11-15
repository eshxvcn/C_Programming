#include<stdio.h>
void swap(int,int);
void main()
{
    int a,b;
    printf("Enter a & b values: ");
    scanf("%d%d",&a,&b);
    printf("Before swapping a & b values are %d and %d\n",a,b);
    swap(a,b);
}

void swap(int a,int b)
{
    int c;
    c=a;
    a=b;
    b=c;
    printf("After swapping a & b values are %d and %d",a,b);
}