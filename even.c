#include<stdio.h>
void main()
{
    int a[10],n;
    printf("Enter the size of array \n");
    scanf("%d",&n);
    printf("Enter the elements of array \n");
    for(int i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }
    int s1=0, s2=0;
    for(int i=0; i<n; i++)
    {
        if((i+1)%2==0)
        s1 = s1+a[i]; 
        if(a[i]%2==0)
        s2 = s2+a[i];
    }
    printf("Sum of even position elements= %d", s1);
    printf("\n Sum of even elements= %d", s2);
}