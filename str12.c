//12
#include <stdio.h>
#include <string.h>

int main()
{
    char str[200];
    int i, c=0;
 
    printf("Enter the string:\n");
    fgets(str,200,stdin);
    printf("%c",str[0]);
    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == ' ' &&  str[i+1] != ' ')
        {
            printf("%c",str[i+1]);
            if ()

    }
    return 0;
}