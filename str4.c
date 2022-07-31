//4
#include <stdio.h>
#include <string.h>
void main()
{
    int sum = 0, i, len;
    char str[100];
    printf("Enter the string:\n");
    scanf("%s", &str);

    len = strlen(str);
    for(i=0; i<len; i++)
    {
        sum = sum + str[i];
    }
    printf("Sum of all ASCII values is %d", sum);
}
