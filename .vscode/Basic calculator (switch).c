#include<stdio.h>
#include<conio.h>
void main()
{
 int a,b,c;
 char ch;
 printf("enter a and b value\n");
 scanf("%d%d",&a, &b);
 printf("MENU\n");
 printf("1. Addition\n 2. Subtraction\n 3. Multiplication\n 4.Division\n 5.Remainder\n");
 scanf("%d",&ch);
 switch(ch)
 {
    case 1: (c=a+b)
    printf("sum is %d",c);
    case 2: (c=a-b)
    printf("difference is %d",c);
    case 3: (c=a*b)
    printf("product is %d",c);
    case 4: (c=a/b)
    printf("Quotient is %d",c);
    case 5: (c=a%d)
    printf("remainder is %d",c):

 }

}