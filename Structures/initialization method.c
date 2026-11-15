#include<stdio.h>
void main()
{
    struct student
    {
        int rno;
        char name[30];
        float avg;
    };
    struct student s={101,"Dennies",46.5};
    printf("Roll no = %d\nName = %s\nAvg = %f",s.rno,s.name,s.avg);

}
