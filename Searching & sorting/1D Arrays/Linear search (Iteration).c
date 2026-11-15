#include<stdio.h>
#include<conio.h>
void main()
{
    int a[100],n,i,key,flag;
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

    for(i=0; i<n; i++)
    {
        if(key==a[i])
        {
            flag=1;
            break;
        }
    }
    if(flag==0)
    printf("Element not found");
    else
    printf("Element is found at index position %d",i);

    getch();

}    