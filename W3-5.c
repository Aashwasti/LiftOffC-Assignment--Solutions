#include <stdio.h>
int pallindrome(int n)
{
    static int r = 0;
    if (n != 0)
    {
        int x = n % 10;
        r = r * 10 + x;
        return pallindrome(n / 10);
    }
    else
        return r;
}
int main()
{
    int num, pal;
    scanf("%d", &num);
    pal = pallindrome(num);
    if (pal == num)
        printf("Pallindrome no \n");
    else
        printf("Not Pallindrome no \n");
    return 0;
}