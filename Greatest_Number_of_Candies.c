#include<stdio.h>
int main()
{
    int n,g;scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){ scanf("%d",&arr[i]);
    
        if(arr[i]>g){g=arr[i];}
    }

    int t;scanf("%d",&t);
    
    for(int i=0;i<n;i++)
    {   
        
        if(arr[i]+t>=g){printf("True ");}
        else{printf("False ");}
    }
}