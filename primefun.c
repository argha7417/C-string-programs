#include <stdio.h>
int prime(int);
int main()
{
    int a,n;
    printf("Enter the number:\n");
    scanf("%d",&n);
    a=prime(n);
    if(a==1)
    printf("Prime");
    else
    printf("Not prime");
}
int prime(int n)
{
    int c=0;
    for(int i=1;i<=n;i++)
    {
        if (n%i==0)
        c=c+1;
    }
    if(c==2)
    return 1;
}

    


























