#include<stdio.h>
void main()
{
    int a[100],i,n,*p;
    printf("ENter no of elements: ");
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        printf("Enter a[%d] =",i);
        scanf("%d",*(p+i));
        
    }
}