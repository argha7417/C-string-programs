//8
#include <stdio.h>
#include <string.h>
int main()
{
    char str[200];
    int i, c=0;
 
    printf("Enter the string:\n");
    gets(str);
    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == ' ' &&  str[i+1] != ' ')
            c++;    
    }
    printf("Number of words in given string are: %d\n", c+1);

    return 0;
}