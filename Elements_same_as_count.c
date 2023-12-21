#include<stdio.h>
int main()
{
    int n;scanf("%d",&n);
    int arr[n],ar1[n];
    for(int i=0;i<n;i++){scanf("%d",&arr[i]);ar1[i]=-1;}
    int c=0,s,t;
    for(int i=0;i<n;i++)
    {s=0,t=arr[i];
        for(int j=0;j<n;j++){
            if(t==arr[j]){s++;arr[j]=0;}
        }
        if(t==s){ar1[c]=t;c++;}
    }
    for(int i=0;i<c;i++){
        printf("%d ",ar1[i]);
    }
    if(c==0){printf("-1");}
}