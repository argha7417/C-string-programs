//6
#include <stdio.h>
#include <string.h>
void main()
{
    int sum = 0, i, len;
    char str[100];
    printf("Enter the string:\n");
    fgets(str,100,stdin);

    len = strlen(str);
    for(i=0; i<len; i++)
    {
        printf("%c\n",str[i]);
    }
}
