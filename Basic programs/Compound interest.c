#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
    float P,r,n,t,CI;
    printf("P = Principal Amount\n r = Rate of Interest\n n = Compounding Frequency Per Annum\n t = Time (in Years)\n Enter the Values of P,,r and t :");
    scanf("%f%f%f%f",&P,&r,&n,&t);

    CI = (float) (P*pow(1+(r/(100*n)), (n*t))) - (P);
    printf("The Compound interest is %.2f%%",CI);

    getch();

}