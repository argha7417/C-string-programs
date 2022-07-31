#include <stdio.h>
int main()
{
    int i,j,n;
    printf("Enter the no. of rows:");
    scanf("%d", &n);
    for(i=1; i<=n; i++)
    {  //start of i 
        for(j=1; j<=i; j++)
            {
                printf("*");
            }
        printf("\n");
    
    }
    return 0;
}