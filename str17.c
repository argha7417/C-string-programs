//17
#include <stdio.h>
#include <string.h>
int main()
{
   char str[5][50], t[50];
   printf("Enter 5 words: ");
   for (int i = 0; i < 5; ++i)
   {
      fgets(str[i], sizeof(str[i]), stdin);
   }
   for (int i = 0; i < 5; ++i) {
      for (int j = i + 1; j < 5; ++j)
      {
         if (strcmp(str[i], str[j]) > 0) 
         {
            strcpy(t, str[i]);
            strcpy(str[i], str[j]);
            strcpy(str[j], t);
         }
      }
   }
   printf("\nIn the Alphabetical order: \n");
   for (int i = 0; i < 5; ++i)
   {
    printf("%s",str[i]);
   }
   return 0;
}