#include<stdio.h>
#include<conio.h>
void main()
{
    int s=1,i,j;
    for(i=0; i<=3; i++)
    {
        for(j=0; j<=4; j++)
        {
            printf("%d\t",s);
            s++;
        }
        printf("\n");
    }

    getch();
    
}