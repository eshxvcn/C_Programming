#include<stdio.h>
void main()
{
    int a[100], i, j, n, key;
    printf("Enter no of elements: ");
    scanf("%d", &n);

    printf("Enter array values:\n");
    for(i=0; i<n; i++)
    {
        printf("Enter a[%d] = ", i);
        scanf("%d", &a[i]);
    }

    for(i=1; i<n; i++)
    {
        key=a[i];
        j=i-1;

        while(j>=0 && a[j]>key)
        {
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=key;
    }

    printf("Sorted array:\n");
    for(i=0; i<n; i++)
    {
        printf("%d\t", a[i]);
    }
}