#include<stdio.h>
#include<string.h>
void main()
{
    char *a[3][50]={"Cprogramming","Pythonprogramming","Javaprogramming"};
    int i;
    for(i=0; i<3; i++)
    {
        printf("%s\n",*a[i]);
    }

}