//3
#include <stdio.h>
int main()
{
    char str[100];
    printf("Enter the String");
    fgets(str,100,stdin);
    int i=0,c=0;
    for (i=0;str[i]!='\0';i++)
    {
        if (str[i]>='0'&& str[i]<='9')
        {
            c=c+(str[i]-'0');
        }
    }
    printf("%d",c);
    return 0;
}