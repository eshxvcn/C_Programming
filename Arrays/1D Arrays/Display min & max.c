#include<stdio.h>
#include<conio.h>
void main()
{
    int a[100],n,i,min,max;
    printf("Enter n value: ");
    scanf("%d",&n);

    for(i=0; i<n; i++)
    {
        printf("Enter a[%d] = ");
        scanf("%d",&a[i]);
    }

    max=a[0];
    min=a[0];

    for(i=0; i<n; i++)
    {
        if(a[i]>max)
        max=a[i];
        if(a[i]<min)
        min=a[i];
    }

    printf("Minimum = %d\n",min);
    printf("Maximum = %d\n",max);


    getch();

}