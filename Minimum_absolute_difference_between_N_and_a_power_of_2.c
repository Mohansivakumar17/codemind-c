#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main()
{
    int n;scanf("%d",&n);
    int t,d=0,t1=n;
    for(int i=0; ;i++)
    {  if(d>t1){t=t1;break;}
        t=pow(2,i);
        d=abs(n-t);
        if(d<t1){t1=d;}
        
        if(abs(n-t)==0||abs(n-t)==1){t=abs(n-t);break;}
    }
    printf("%d",t);
}