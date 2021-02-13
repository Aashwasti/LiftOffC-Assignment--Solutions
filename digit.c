#include<stdio.h>
void main()
{
    int n;
    printf("Enter a no \n");
    scanf("%d",&n);
    int s=0;
    while(n>0)
    {
        int x= n%10;
        s = s + x;
        n= n/10;
    }
    printf("sum of the digits is= %d", s);
}