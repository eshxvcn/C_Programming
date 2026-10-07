#include<stdio.h>
#include<conio.h>
void main()
{
 int a,b,c;
 int ch;
 printf("Enter a and b value\n");
 scanf("%d%d",&a, &b);
 printf("MENU\n");
 printf("1. Addition\n 2. Subtraction\n 3. Multiplication\n 4.Division\n 5.Remainder\n");
 printf("Enter your choice: ",ch);
 scanf(" %d ",&ch);
 switch(ch)
  {
   case 1: (c=a+b);
   printf("Sum is %d",c);
   break;
   case 2: (c=a-b);
   printf("Difference is %d",c);
   break;
   case 3: (c=a*b);
   printf("Product is %d",c);
   break;
   case 4: (c=a/b);
   printf("Quotient is %d",c);
   break;
   case 5: (c=a%b);
   printf("Remainder is %d",c);
   break;
   default:printf("Invalid choice");
  }
   
 getch();

}