#include<stdio.h>
void main()
{
    int a[100],i,j,n,s;
    printf("Enter no of elements: ");
    scanf("%d",&n);

    printf("Enter array values:\n");
    for(i=0; i<n; i++)
    {
        printf("Enter a[%d] = ",i);
        scanf("%d",&a[i]);
    }
    
    for(i=0; i<n; i++)
    {
        for(j=0; j<n-i-1; j++)
        {
            if(a[j]>a[j+1])
            {
             s=a[j];
             a[j]=a[j+1];
             a[j+1]=s;
            }
        }
    }

    printf("Sorted array:\n");
    for(i=0; i<n; i++)
    {
        printf("%d\t",a[i]);
    }

}