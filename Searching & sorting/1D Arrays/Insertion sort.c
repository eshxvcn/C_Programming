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
    
}    