#include<stdio.h>
void main()
{
    int a[100],n,i,low,high,key,r;
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
    r=binsearch(a,n,key,low,high);
    if(r==-1)
    printf("Element not found");
    else
    printf("The element is at index position %d",r);
}

int binsearch(int a[],int n,int key,int low, int high)
{
    int mid;
    if(low>high)
        return -1;
        else
        {
            mid=(low+high)/2;
            if(key==a[mid])
            return mid;
            else if(key>a[mid])
            binsearch(a,n,key,mid+1,high);
            else binsearch(a,n,key,low,mid-1);
        }
}