#include<stdio.h>
#include<conio.h>
void main()
{
    int S1,S2,S3,S4,S5;
    float t,avg;
    printf("enter the values of S1,S2,S3,S4,S5");
    scanf("%d,%d,%d,%d,%d",&S1,&S2,&S3,&S4,&S5);
    t=S1+S2+S3+S4+S5;
    avg+(float) t/5;
    if(avg>=70)
    printf("%f, Distinction",avg);
    else if(t>=60 && t<70);
    printf("%f, First Division",avg);
    elseif(t>=50 && t<60);
    printf("%f, Second division",avg);
    elseif(t>=40 && t<50);
    printf("%f, Third division",avg);
    elseif;
    {printf("%d, FAILED",avg);}
    getch();
}
