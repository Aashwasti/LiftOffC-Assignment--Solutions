#include<stdio.h>
void main()
{
    int a[10], n, l, s;
    printf("Enter the size of array \n");
    scanf("%d",&n);
    printf("Enter the elements of array \n");
    for(int i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }
    l= a[0];
    s= a[0];
    for(int i=0; i<n; i++)
    {
        if(a[i]>l)
        l= a[i];
        if (a[i]<s)
        s= a[i];
    }
    printf("\n Largest no = %d", l);
    printf("\n Smallest no = %d", s);
}