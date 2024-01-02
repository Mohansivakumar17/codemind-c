#include<stdio.h>
#include<math.h>
int main()
{
    int n;scanf("%d",&n);
    int arr[n],s=0;
    for(int i=0;i<n;i++){scanf("%d",&arr[i]);
    
    int t=sqrt(arr[i]);
    if(arr[i]%t==0&&t*t==arr[i]){s+=arr[i];}
        
    }printf("%d",s);
}