#include<stdio.h>
int main()
{
    int n;scanf("%d",&n);
    int t,c,t1;
    int arr[n];
    for(int i=0;i<n;i++) scanf("%d",&arr[i]);

    for(int i=1;i<100;i++)
    {
        c=0;
        t1=i;
        for(int j=0;j<n;j++)
        {
            if(arr[j]%t1==0){c++;}
        }
        if(c==n){t=i;}
    }

    printf("%d",t);
}
