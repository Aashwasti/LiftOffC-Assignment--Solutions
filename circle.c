#include<stdio.h>
#include<math.h>
void main()
{
    float r, d, c, a;
    scanf("%f", &r);
    d= 2*r;
    c= 2*M_PI*r;
    a= M_PI*r*r;
    printf("\n Diameter= %f", d);
    printf("\n Circumference= %f", c);
    printf("\n Area= %f", a);

}