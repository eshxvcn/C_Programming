#include<stdio.h>
#include<conio.h>
void main()
{
    char x;
    printf("Enter any character");
    scanf("%c",&x);

    if (x>=97 && x<=122)
    printf("It is a LOWERCASE character");

    else if(x>=65 && x<=90)
    printf("It is an UPPERCASE character");

    else if(x>=48 && x<=57)
    printf("It is a digit");

    else 
    printf("It is a special symbol");

    getch();
    
}