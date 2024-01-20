#include<stdio.h>
int main()
{
    int arr[3],ar[3];
    for(int i=0;i<3;i++) scanf("%d",&arr[i]);
    
    for(int i=0;i<3;i++) scanf("%d", &ar[i]);
    
    int a=0,b=0;
    for(int i=0;i<3;i++)
    {
        if(arr[i]>ar[i]){a++;}
        if(ar[i]>arr[i]){b++;}
    }
    printf("%d %d",a,b);
}