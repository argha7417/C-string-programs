//20
#include <stdio.h>
int main()
{
    int s=65,i,j,c=0;
    char str[100],ch[10];
    printf("Enter the string:");
    fgets(str,100,stdin);
    printf("Enter the character:");
    fgets(ch,10,stdin);
    for (i=0;str[i]!='\0';i++)
    {
        if(ch[0]==str[i])
        {
            c++;
        }
    }
    printf("\nfrequency of character:%d",c);
    return 0;
}

