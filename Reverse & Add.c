#include <stdio.h>
int main()
{

    long long int t,n,c,sum,r,d;
    scanf("%lld",&t);
    while (t--)
    {
        scanf("%lld",&n);
        d=n;
        c=0;
        while (1)
        {
            sum=0;
            while (d>0)
            {
                r=d%10;
                sum=sum*10+r;
                d=d/10;
            }
            if (n==sum)
                break;
            else
            {
                d=sum+n;
                n=sum+n;
                c++;
            }
        }
        printf("%lld %lld\n",c,n);
    }
    return 0;
}
