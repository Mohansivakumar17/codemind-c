#include<stdio.h>
void prin(int i,int arr[],int n)
{   int g=0;
    for(++i;i<n;i++)
    {
        if(arr[i]>g){g=arr[i];}
        
    }
    printf("%d ",g);
}
int main()
{
    int n;scanf("%d",&n);
    int arr[n],g=0,g1=0;
    for(int i=0;i<n;i++){ scanf("%d",&arr[i]);}
   
    for(int i=0;i<n-1;i++)
    {   
        prin(i,arr,n);
    }
    printf("-1");
    
    
}