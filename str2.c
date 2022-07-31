//2
#include <stdio.h>
int main()
{
    int i,v=0,c=0,s=0,sp=0;
    char str[100];
    printf("Enter a sentence:");
    fgets(str,100,stdin);
    for (i=0;str[i]!='\0';i++)
    {
       if(str[i] == 'a'|| str[i] == 'e'|| str[i] == 'i'||str[i] == 'o'|| str[i] == 'u'||str[i] == 'A' ||str[i] == 'E' ||str[i] == 'I'||str[i] == 'O'|| str[i] == 'U')
        {
            v=v+1;
        }
        else if((str[i] >= 'a' && str[i] <= 'z')||(str[i]>='A' && str[i]<='Z'))
        {
            c = c+1;
        }
        else if (str[i]==' ')
        {
            sp=sp+1;
        }
        else
        {
            s=s+1;
        }
}
    printf("Vowel:%d Consonants:%d Space:%d Special:%d",v,c,sp,s);
    return 0;
}