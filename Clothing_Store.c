#include<stdio.h>

int main()
{
    int n;scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++) scanf("%d",&arr[i]);
    
    int c=0;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]==arr[j]&&arr[i]!=0){arr[i]=0;arr[j]=0;c++;}
        }
    }
    printf("%d",c);
    
}