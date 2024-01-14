#include<stdio.h>
int main()
{
    int n;scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++) scanf("%d",&arr[i]);
    
    int t,t1,t2=0;scanf("%d",&t);
    int s;
    for(int i=0;i<n;i++)
    {   s=0,t1=arr[i];
        for(int j=0;j<n;j++)
        {
            if(arr[i]==arr[j])
            {
               s++; 
              
            }
        }
        if(t==s)
        {t2++;
            printf("%d ",t1);
            arr[i]=0;
        }
    }
    if(t2==0) printf("-1");
}