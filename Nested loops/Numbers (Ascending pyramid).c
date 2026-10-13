#include<stdio.h>
#include<conio.h>
void main()
{
    int s=1,i,j;
    for(i=1; i<=5; i++)
    {
        for(j=1; j<=i; j++)
        {
            printf("%d\t",s);
            s++;
        }
        printf("\n");
    }

    getch();
    
}