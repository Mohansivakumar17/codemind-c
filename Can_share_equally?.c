#include<stdio.h>
int main()
{
    int x,y;scanf("%d%d",&x,&y);
    int t=x+(2*y);
 
    if(x==0&&y%2==0){printf("YES");}
    else if(x==0&&y%2!=0){printf("NO");}
    else if(t%2==0){printf("YES");}
    else{printf("NO");}
}