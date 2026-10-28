#include<stdio.h>
#include<conio.h>
void main()
{
    int a[10][10],r,c,i,j,sum=0;
    printf("Enter the number of rows and columns: ");
    scanf("%d%d",&r,&c);

    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
          printf("Enter a[%d][%d] = ");
          scanf("%d",&a[i][j]);
        }
    }
    
    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
          sum=sum+a[i][j];
        }
    }
    printf("\nThe sum is %d",sum);

    getch();

}