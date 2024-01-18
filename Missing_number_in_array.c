#include<stdio.h>
int main()
{
    int t;scanf("%d",&t);
    while(t--)
    {
        int n;scanf("%d",&n);
        int arr[n-1],ar[n]={0};
        for(int i=0;i<n-1;i++)
        {
            scanf("%d",&arr[i]);
            int c=47+arr[i];
            ar[c-48]=arr[i];
        }
        for(int i=0;i<n;i++)
        {
            if(ar[i]==0){printf("%d
",ar[i-1]+1);break;}
        }
    }
}