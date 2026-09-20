#include<stdio.h>
#include<conio.h>
void main()
{
    int i,n,l,s;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    printf("Number of multiples of %d: ",n);
    scanf("%d",&l);
    for(i=1; i<=l; i++)
    {
        s=n*i;
        printf("%d x %d = %d\n",n,i,s);
    }
    
    getch();

}