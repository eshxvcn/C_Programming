#include<stdio.h>
#include<conio.h>
void main()
{
    int a[100],n,i,min;
    printf("Enter n value: ");
    scanf("%d",&n);

    for(i=0; i<n; i++)
    {
        printf("Enter a[%d] = ");
        scanf("%d",&a[i]);
    }

    min=a[0];

    for(i=0; i<n; i++)
    {
        if(a[i]<min)
        min=a[i];
    }

    printf("Minimum = %d\n",min);


    getch();

}