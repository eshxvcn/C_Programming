#include<stdio.h>
#include<conio.h>
void main()
{
    int a[100],n,i;
    printf("Enter n value: ");
    scanf("%d",&n);

    for(i=0; i<n;i++)
    {
        printf("Enter a[%d]");
        scanf("%d",&a[i]);
    }

    printf("The array\n");
    for(i=0; i<n; i++)
    {
        printf("%d\n",a[i]);
    }

    getch();

}