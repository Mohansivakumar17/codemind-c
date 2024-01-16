#include<stdio.h>
int ret(int j,int arr[],int n){
    int s=0;
    for(int i=j;i<n;i++)
    {   s++;
        if(arr[j]-arr[i]<=-1){return s-1;}
    }
    return 0;
}
int main()
{
    int n;scanf("%d",&n);
    int arr[n]; int ar1[n]={0};
    for(int i=0;i<n;i++) scanf("%d",&arr[i]);
    
    for(int i=0;i<n;i++)
    {
        ar1[i]=ret(i,arr,n);
        printf("%d ",ar1[i]);
    }
}