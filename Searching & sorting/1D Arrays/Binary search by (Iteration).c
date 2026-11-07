#include<stdio.h>
#include<conio.h>
void main()
{
    int a[100],n,i,low,high,mid,key;
    printf("Enter no of elements: ");
    scanf("%d",&n);

    printf("Enter array values:\n");
    for(i=0; i<n; i++)
    {
        printf("Enter a[%d] = ",i);
        scanf("%d",&a[i]);
    }

    printf("Enter the searching element: ");
    scanf("%d",&key);
    
    low=0;
    high=n-1;

    for(i=0; i==0; i=i)
    {
        mid=(low+high)/2;

        if(key<a[mid])
        {
            high=(mid-1);
        }
        else if(key>a[mid])
        {
            low=(mid+1);
        }
        else if(key==a[mid])
        {
            printf("\nThe Element is present in the array");
            break;
        }

        if(low<=high)
        continue;
        else
        printf("\nElement not found in array");
        break;
    }

    getch();

}    