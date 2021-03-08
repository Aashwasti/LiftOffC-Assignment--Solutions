#include<stdio.h>
int square(int n)
{
    int sq = n*n;
    return sq;
}
int main()
{
    int num;
    printf("Enter the no to find square \n");
    scanf("%d", &num);
    printf("Square of %d is %d \n", num, square(num));
    return 0;
}