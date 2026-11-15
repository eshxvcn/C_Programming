#include<stdio.h>
void main()
{
    struct student
    {
        int rno;
        char name[30];
        float avg;
    };
    struct student s;
    printf("Enter student roll no: ");
    scanf("%d",&s.rno);
    printf("Enter student name: ");
    scanf("%s",&s.name);
    printf("Enter student avg: ");
    scanf("%f",&s.avg);
    printf("\nRoll no = %d\nName = %s\nAvg = %f",s.rno,s.name,s.avg);

}
