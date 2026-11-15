#include<stdio.h>
#include<string.h>
void main()
{
    struct student
    {
        int rno;
        char name[30];
        float avg;
    };
    struct student s;
    s.rno=124;
    strcpy(s.name,"Ritchie");
    s.avg=92.8;
    printf("Roll no = %d\nName = %s\nAvg = %f",s.rno,s.name,s.avg);

}
