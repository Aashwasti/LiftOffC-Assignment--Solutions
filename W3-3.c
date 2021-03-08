#include <stdio.h>
int gcd(int a, int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}
int main()
{
    int a, b, lcm;
    scanf("%d %d", &a, &b);
    lcm = a * b / gcd(a, b);
    printf("GCD is %d \n", gcd(a, b));
    printf("LCM is %d \n", lcm);
    return 0;
}