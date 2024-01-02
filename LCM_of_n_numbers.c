#include<stdio.h>
int main()
{
    int n;scanf("%d",&n);
    int arr[n],m=0,t,s;
    for(int i=0;i<n;i++){scanf("%d",&arr[i]);if(arr[i]>m){m=arr[i];}}
    for(int i=1; ;i++)
    {
        t=i*m;s=0;
        for(int j=0;j<n;j++)
        {
            if(t%arr[j]==0){s++;}
        }
        if(s==n){printf("%d",t);break;}
    }
    
}