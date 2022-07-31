#include <stdio.h>
int main() 
{
    int n,c=0;
    printf("Enter the number\n");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        if (n%i==0)
        {
            c=c+1;
        }
    }
    if(c==2)
    printf("Prime\n");
    else
    printf("Not Prime\n");
    return 0;
}