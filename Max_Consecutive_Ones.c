#include<stdio.h>
int main()
{
    int n;scanf("%d",&n);
    int arr[n],c=0,t,t1=0;
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        if(arr[i]==1){c++;}
        else if(arr[i]==0){t=c;c=0;}
        if(t>t1){t1=t;}
        if(c>t1){t1=c;}
    }
    printf("%d",t1);
}