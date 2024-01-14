#include<stdio.h>
int main()
{
    int n;scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++) scanf("%d",&arr[i]);
    
    int s=0;
    for(int i=0;i<n;i++)
    {if(arr[i]!=0&&arr[i]!=1)
    { s++;break;}
    }
    
    if(s==0) printf("True");
    else printf("False");
}