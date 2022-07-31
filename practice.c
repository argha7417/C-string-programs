#include <stdio.h>
int main()
{
    int i,j,k,n;
    printf("Enter the no. of rows:");
    scanf("%d", &n);

    for(i=n; i>=1;i--)
    {
        for(k=0; k<(n-i);k++)
        {
            printf(" ");
        }
        for(j=1; j<(2*i); j++)
        {
            printf("*");
        }
        printf("\n");
    }
    for(i=1; i<n; i++)
    {
        for(k=1;k<(n-i);k++)
        {
            printf(" ");
        }
        for(j=1; j<=(2*i+1);j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}