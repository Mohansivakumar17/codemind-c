#include<stdio.h>
int main()
{
    int n;scanf("%d",&n);
    int s=0;
    for(int i=n-1;i!=0;i--)
    {
        s+=i;
    }
    printf("%d",s);
}