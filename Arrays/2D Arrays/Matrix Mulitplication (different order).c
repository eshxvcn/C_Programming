#include<stdio.h>
#include<conio.h>
void main()
{
    int a[10][10],b[10][10],c[10][10],i,j,k,r1,c1,r2,c2;
    printf("Enter the number of rows and columns in Matrix A: ");
    scanf("%d%d",&r1,&c1);
    printf("Enter the number of rows and columns in Matrix B: ");
    scanf("%d%d",&r2,&c2);


    if(r1==c2)
  {  
    printf("Enter Matrix A values: ");
    for(i=0; i<r1; i++)
    {
        for(j=0; j<c1; j++)
        {
        printf("Enter a[%d][%d]");
        scanf("%d",&a[i][j]);
        }
    }

    printf("Enter Matrix B values: ");
    for(i=0; i<r2; i++)
    {
        for(j=0; j<c2; j++)
        {
        printf("Enter b[%d][%d]");
        scanf("%d",&b[i][j]);
        }
    }

    printf("The product of the matrices is:\n");
    for(i=0; i<r1; i++)
    {
        for(j=0; j<c2; j++)
        {
         c[i][j]=0;
         for(k=0; k<c2; k++)
         {
           c[i][j]=c[i][j]+a[i][k]+b[k][j];
         }
         printf("%d\t",c[i][j]);
        }
      printf("\n");
    }

  }
    else printf("Multiplication of these Matrices is not possible");

    getch();

}