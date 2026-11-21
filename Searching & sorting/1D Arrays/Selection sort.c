#include<stdio.h>
#include<conio.h>
void main()
{
    int a[100],i,j,n,s,x,min;
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
     min=a[j];
     x=j;
     for(i=j; i<n; i++)
     {
        if(min>a[i])
        {min=a[i];
        x=i;
        }
     }
     s=a[j];
     a[j]=a[x];
     a[x]=s;
    }
    
    printf("Sorted array:\n");
    for(i=0; i<n; i++)
    {
        printf("%d\t",a[i]);
    }

}   