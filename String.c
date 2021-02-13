#include<stdio.h>
#include<string.h>
void main()
{
    char str[50], c= str[0];
    int space=0;
    printf("enter a string \n");
    fgets(str, sizeof(str), stdin);
    int i;
    while (c!= '\0')
    {
        c= str[i];
        if(c==' ')
        space++;
        i++;
    }
    printf("No of words in the string = %d", (space+1));

}