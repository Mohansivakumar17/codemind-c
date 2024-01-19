#include<stdio.h>
int main()
{
    int n;scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++) scanf("%d",&arr[i]);
    
    scanf("%d",&n);
    int ar1[n];
    for(int i=0;i<n;i++) scanf("%d",&ar1[i]);
    
    int c=0,t;scanf("%d",&t);
    for(int i=0;i<n;i++)
    {
        if(arr[i]<=t&&ar1[i]>=t){c++;}
    }
    printf("%d",c);

    
}