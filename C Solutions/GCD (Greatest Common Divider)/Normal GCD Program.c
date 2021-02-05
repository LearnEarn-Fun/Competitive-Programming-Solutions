#include<stdio.h>
int min(int a,int b) 
{
    if(a<b)
    return a;
    else
    return b;
}
int gcd(int a,int b)
{
    int t;
    t=min(a,b);
    again:
    if(a%t==0)
    {
        if(b%t==0)
            return t;
        else
            t=t-1;
            goto again;
    }
    else
    {
        t=t-1;
        goto again;
    }
}
int main(int argc, char const *argv[]) 
    int a,b;
    scanf("%d %d",&a,&b);
    printf("The GCD of %d and %d is: %d",a,b,gcd(a,b));
    return 0;
}
