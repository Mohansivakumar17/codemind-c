#include<stdio.h>
#include<math.h>
int main()
{
    int n,t,t1;scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int s=0;
    for(int i=0;i<n;i++)
    {   if(arr[i]==0){continue;}
        t=pow(2,n-i-1);
      t1=t*arr[i];
      s+=t1;
    }
    printf("%d",s);
}