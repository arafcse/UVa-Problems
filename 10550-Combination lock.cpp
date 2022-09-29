#include<cstdio>

int main()
{
    int a,b,c,d,turn,ans;
    while(scanf("%d %d %d %d",&a,&b,&c,&d))
    {
        if(!a && !b && !c && !d)
            break;
        ans = 1080;
        if(b>a) ans += (40+a-b)*9;
        else ans += (a-b)*9;
        if(b>c) ans += (40+c-b)*9;
        else ans += (c-b)*9;
        if(d>c) ans += (40+c-d)*9;
        else ans += (c-d)*9;
        printf("%d\n",ans);
    }
    return 0;
}
