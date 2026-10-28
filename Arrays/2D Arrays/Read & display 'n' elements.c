#include<stdio.h>
#include<conio.h>
void main()
{
    int a[10][10],r,c,i,j;
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

    printf("\nThe array is:\n");
    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
        printf("%d\t",a[i][j]);
        }
        printf("\n");
    }

    getch();

}