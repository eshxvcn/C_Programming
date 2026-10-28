#include<stdio.h>
#include<conio.h>
void main()
{
    int a[100],n,i,sum=0;
    printf("Number of elements to be added: ");
    scanf("%d",&n);

    for(i=0; i<n; i++)
    {
        printf("Enter a[%d] = ",i);
        scanf("%d",&a[i]);
    }
    
    for(i=0; i<n; i++)
    {
        sum=sum+a[i];
    }
    printf("\nThe sum is %d",sum);

    getch();

}