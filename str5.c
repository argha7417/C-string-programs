//5
#include <stdio.h>
void main()
{
    char str[100];
    printf("Enter the String:");
    fgets(str,100,stdin);
    int i=0;
    for(i=0; str[i]!='\0'; i++)
    {
        if ((str[i]>=97 && str[i]<=122)||(str[i]>=65 && str[i]<=90))
        {
            printf("%c",str[i]+2);
        }
    }
}