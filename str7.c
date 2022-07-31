//7
#include <stdio.h>
#include <string.h>
int main()
{
    char str[100];  
    int i,n,c=0;
 
    printf("Enter  the string : ");
    gets(str);
    n = strlen(str);
 
    for(i=0; i<n/2; i++)  
    {
      if(str[i] == str[n-i-1])
      c++;
    }
   if(c==i)
       printf("String is palindrome");
    else
        printf("String is not palindrome");
 
   return 0;

}