#include<stdio.h>
int main()
{
    int n,t;scanf("%d%d",&n,&t);
    int arr[n],c=0,s=0;
    for(int i=0;i<n;i++)
    {   scanf("%d",&arr[i]);
        if(arr[i]<=t){c++;}
        if(arr[i]>t){s++;}
        if(s>1){break;}
    }
    printf("%d",c);
}