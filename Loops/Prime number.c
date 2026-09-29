#include<stdio.h>
#include<conio.h>
void main()
{
    int i,n;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    if(n!=1)
  {

    for(i=2; i<=n-1; i++)

    {
     if(n%i!=0)
     n=n;
     else
     break;
    }

    if(i>n-1)
    printf("%d is a Prime Number",n);
    else
    printf("%d is not a Prime Number",n);

  }

  else

  {
    printf("1 is neither a Prime Number nor a Composite Number");
  }

  getch();


}
