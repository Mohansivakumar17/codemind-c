#include<stdio.h>
int main()
{
    int n;scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){scanf("%d",&arr[i]);}
    
    int t;
    for(int i=0;i<n;i++)
    {   t=0;
        for(int j=0;j<i;j++)
        {
            if(arr[i]==arr[j]){ t++;}
        }
        if(t==0){ printf("%d ",arr[i]);}
        
       
    }
}