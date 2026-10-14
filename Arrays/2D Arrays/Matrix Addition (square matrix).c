#include<stdio.h>
#include<conio.h>
void main()
{
    int a[10][10],b[10][10],c[10][10],i,j,sz;
    printf("Enter the order of Matrix A and Matrix B (Square Matrices): ");
    scanf("%d",&sz);

    printf("Enter Matrix A values: ");
    for(i=0; i<sz; i++)
    {
        for(j=0; j<sz; j++)
        {
        printf("Enter a[%d][%d]");
        scanf("%d",&a[i][j]);
        }
    }

    printf("Enter Matrix B values: ");
    for(i=0; i<sz; i++)
    {
        for(j=0; j<sz; j++)
        {
        printf("Enter b[%d][%d]");
        scanf("%d",&b[i][j]);
        }
    }

    printf("The sum of the matrices is:\n");
    for(i=0; i<sz; i++)
    {
        for(j=0; j<sz; j++)
        {
        c[i][j]=a[i][j]+b[i][j];
        printf("%d\t",c[i][j]);
        }
        printf("\n");
    }

    getch();

}