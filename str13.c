//13
#include <stdio.h>
int main()
{
    char str[100];
    printf("Enter the String:");
    fgets(str,100,stdin);
    int i=0;
    for(i=0; str[i]!='\0'; i++)
    {
        if(str[i]==str[i+1]-1)
        {
            printf("%c",str[i]);
        }
    }
    return 0;
}