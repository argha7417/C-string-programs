#include <stdio.h>
int fact (int);
int main()
{
    int n,a;
    printf("Enter the number\n");
    scanf("%d",&n);
    a=fact(n);
    printf("Factorial=%d",a);
}
int fact(int n)
{
    int f=1;
    for(int i=1;i<=n;i++)
    {
        f=f*i;
    }
    return f;
}