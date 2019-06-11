#include<stdio.h>
int main()
{
    long long int a,b,c;
    scanf("%lld %lld %lld",&a,&b,&c);
    if(a>b&&a>c)
    {
        printf("%d",a);
    }
    else if(a>c)
    {
        printf("%d",b);
    }
    else
    {
        printf("%d",c);
    }
  
}
