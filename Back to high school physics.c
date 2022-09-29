#include<stdio.h>
int main()
{
    int v,t;
    while(scanf("%d %d",&v,&t)==1)
    {
        if(v==0 && t==0)
        printf("0\n");
        else
        printf("%d\n",1*v*t);
    }
    return 0;
}
