#include<stdio.h>
#include<conio.h>
void main()
{
    int a[10][10],r,c,i,j,min,max;
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
    
    max=a[0][0];
    min=a[0][0];

    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
        if(a[i][j]>max)
        max=a[i][j];
        if(a[i][j]<min)
        min=a[i][j];
        }
    }

    printf("Minimum = %d\n",min);
    printf("Maximum = %d\n",max);


    getch();

}