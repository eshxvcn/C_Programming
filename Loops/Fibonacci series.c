#include<stdio.h>
#include<conio.h>
void main()
{
    int i,n,n1=0,n2=1,n3=0;
    printf("Enter the number of terms: ");
    scanf("%d",&n);
    printf("Fibonacci series: ");
    for(i=1; i<=n; i++)
    {
        printf("%d\t",n3);
        n3=n1+n2;
        n1=n2;
        n2=n3;
    }
    
   

    getch();

}