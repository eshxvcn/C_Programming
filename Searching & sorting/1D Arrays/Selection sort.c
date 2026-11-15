#include<stdio.h>
#include<conio.h>
void main()
{
    int a[100],i,j,n,s,min;
    printf("Enter no of elements: ");
    scanf("%d",&n);

    printf("Enter array values:\n");
    for(i=0; i<n; i++)
    {
        printf("Enter a[%d] = ",i);
        scanf("%d",&a[i]);
    }

    for(j=0; j<n; j++)
    {
     min=a[0];
     for(i=0; i<n; i++)
     {
        if(a[i]<min)
        min=a[i];
     }
     i--;
     s=a[j];
     a[j]=a[i];
     a[i]=s;
    }
    
    printf("Sorted array:\n");
    for(i=0; i<n; i++)
    {
        printf("%d\t",a[i]);
    }

}   