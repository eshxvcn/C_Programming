#include<stdio.h>
#include<conio.h>
void main()
{
  int t,S1,S2,S3,S4,S5;
  float avg;

  printf("Enter the values of S1,S2,S3,S4,S5: ");
  scanf("%d%d%d%d%d",&S1,&S2,&S3,&S4,&S5);
    
  t = (S1+S2+S3+S4+S5);
  avg = (t/500.0)*100;
  printf("Total = %d/500\n",t);
  printf("Average = %f\n",avg);

 if (S1>=27 && S2>=27 && S3>=27 && S4>=27 && S5>=27)

  {
   if(avg>=70)
   printf("Result = PASS (Distinction)");

   else if(avg>=60 && avg<70)
   printf("Result = PASS (First Division)");

   else if(avg>=50 && avg<60)
   printf("Result = PASS (Second Division)");

   else if(avg>=40 && avg<50)
   printf("Result = PASS (Third Division)");

   else printf("Result = FAILED");
  }

 else 

 printf("Result = FAILED (<27 in one or more subjects)"); 

 getch();

    
}
