#include<stdio.h>
#include<conio.h>
void main()
{
    int n,CP,rev=0,r;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    CP=n;
    while(n>0)
    {
        r = n%10;
        rev = (rev*10)+r;
        n = n/10;   
    }

    if (CP==rev)
    printf("%d is a Palindrome",CP);
    else
    printf("%d is not a Palindrome",CP);

}