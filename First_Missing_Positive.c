#include<stdio.h>

int main()
{
    int n,t,f=1;scanf("%d",&n);
    int arr[n],ar1[n]={0},c=0;
    for(int i=0;i<n;i++){scanf("%d",&arr[i]);
        if(arr[i]>0){ar1[c++]=arr[i];}
    }
    
    for(int i=0;i<c-1;i++)
    {
        for(int j=0;j<c-i-1;j++)
        {
            if(ar1[j]>ar1[j+1]){
                t=ar1[j];
                ar1[j]=ar1[j+1];
                ar1[j+1]=t;
            }
        }
    }
    
    
    for(int i=0;i<=c;i++)
    {
        if(ar1[i]!=(i+1)){printf("%d",i+1);break;}
    }
}