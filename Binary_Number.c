#include<stdio.h>


int main()
{
    int n;scanf("%d",&n);
    int m=2*n-1;int c;
    if(n==3){m=7;}
    if(n==4){m=15;}
    int t;
    for(int i=0;i<=m;i++)
    {  int arr[m]={0};
        t=i;c=0;
        while(t!=0)
        {
            if(t%2==0){arr[c++]=0;}
            else{arr[c++]=1;}
            t/=2;
        }c=n;
        while(c--)
        {
            printf("%d",arr[c]);
        }
        printf("
");
    }
}