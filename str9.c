//9
#include <stdio.h>
#include <string.h>
int main()
{
    char str[200];
    int i, c=0;

    printf("Enter a sentence:\n");
    gets(str);
    
    if(str[0] == 'S' ||  str[0] == 's')
        {
            c++;
        }
        for(i=0; str[i] != '\0'; i++)
        {
            if((str[i] == ' ') && (str[i+1] == 's')  || str[i] == 'S')
            {
                c++;
            }
        }
    
    printf("The no. of words starting with S in the string is %d\n", c);
    return 0;
}