#include<stdio.h>

int main()
{
    int num,a,b,i;
    long long unsigned int c;

    while(scanf("%d",&num)==1)
    {
        c=0;a=1;b=1;
        for(i=3;i<=num;i++)
        {
            c=a+b;
            a=b;
            b=c;
        }
        printf("The Fibonacci number for %d is %llu\n",num,c);
    }
    return 0;
}
