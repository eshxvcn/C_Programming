#include<stdio.h>
#include<conio.h>
void main()
{
    int n,i=1,f,r;
    printf("Factorial of: ");
    scanf("%d",&n);
    r=factorial(n,f,i);
    printf("The factorial of %d is %d.\nHave a nice day!",n,r);

}
int factorial(int n,int f,int i)
{
    if(i>n)
    return f;
    else
    {
      f=f*i;
      return factorial(n, f, i++);
    }

}