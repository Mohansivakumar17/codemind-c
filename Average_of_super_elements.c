#include<stdio.h>
int main()
{
    int n;scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++) scanf("%d",&arr[i]);
    
    int t=0,t1=0;
    int s;
    for(int i=0;i<n;i++)
    {   s=0;
        for(int j=0;j<n;j++)
        {
            if(arr[i]==arr[j])
            {
               s++; 
              
            }
        }
        if(arr[i]==s)
        {
            t+=arr[i];
            t1++;
            arr[i]=0;
        }
    }
    if(t==0) printf("-1");
    else printf("%.2f",(float) t/t1);
}