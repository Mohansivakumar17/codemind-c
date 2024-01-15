#include<stdio.h>
int main()
{
    char str[100];
    fgets(str,100,stdin);
    int n,m;scanf("%d%d",&n,&m);
    for(int i=n;i<=m;i++)
    {
        printf("%c",str[i]);
    }
}