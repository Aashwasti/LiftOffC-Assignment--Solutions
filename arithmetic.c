#include<stdio.h>
void main()
{
    int a, b, s, d, m, div;
    scanf("%d %d", &a, &b);
    s = a+b;
    d = a-b;
    m = a*b;
    div = a/b;
    printf("Sum= %d", s);
    printf("\n Difference= %d", d);
    printf("\n Multiplication= %d", m);
    printf("\n Division= %d", div);
    
}