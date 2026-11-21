#include<stdio.h>
void main()
{
    int a[100],n,i,key,r;
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
    i=0;
    r=linsearch(a,n,key,i);
    printf("The element is at index position %d",i);
}

int linsearch(int a[],int n, int i,int key)
{
    if(key==a[i])
        return i;
        else
        linsearch(a,n,key,i++);
}