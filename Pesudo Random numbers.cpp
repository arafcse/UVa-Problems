#include<cstdio>
using namespace std;

int main()
{
    int z,i,m,l,c=1;
    while (scanf("%d%d%d%d",&z,&i,&m,&l)==4)
    {
        if (!z && !i && !m && !l) return 0;
        int count=0;
        int L=(z*l+i)%m;
        l=L;
        do
        {
            L=(z*L+i)%m;
            count++;
        }while (L!=l);
        printf("Case %d: %d\n",c++,count);
    }
    return 0;
}
