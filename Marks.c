#include<stdio.h>
void main()
{
    int a, b, c, d, e, sum;
    float per;
    char grade;
    scanf("%d" "%d" "%d" "%d" "%d" , &a, &b, &c, &d, &e);
    sum = a+b+c+d+e;
    per = sum*100/500;
    if(per>= 90)
    grade = 'A';
    else if (per>=80 && per<90)
    grade = 'B';
    else if (per>=70 && per<80)
    grade = 'C';
    else if (per>=60 && per<70)
    grade = 'D';
    else if (per>=40 && per<60)
    grade = 'E';
    else
    grade = 'F';
    printf("\n percentage= %f", per);
    printf("\n grade= %c", grade);
}