#include<stdio.h>
int main()
{
    int n;scanf("%d",&n);
    int arr[n],c=0,s;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        int t=arr[i];s=0;
        for(int j=i;j<n;j++){
            if(t==arr[j]){s++;arr[j]=0;}
        }
        if(t==s){c++;}
    }
    
    printf("%d",c);
}