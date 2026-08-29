#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b,c,d;
    printf("enter the values of a,b,c and d");
    scanf("%d,%d,%d,%d",&a,&b,&c,&d);
        if(a>b)
        {
            if(a>c)
            {
                if(a>d)
                printf("%d is the greatest of a,b,c and d",a);
                else
                printf("%d is the greatest of a,b,c and d",d);
            }
            else
            {
                if(c>d)
                printf("%d is the greatest of a,b,c and d",c);
                else
                printf("%d is the greatest of a,b,c and d",d);
            }
        }
        else
        {
            if(b>c)
           {
            if(b>d)
            printf("%d is the greatest of a,b,c and d",b);
            else
            printf("%d is the greatest of a,b,c and d",d);
           }
           else
           {
            if(c>d)
            printf("%d is the greatest of a,b,c and d",c);
            else
            printf("%d is the greatest of a,b,c and d",d);
           }
        }
        getch();
}