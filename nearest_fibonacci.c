#include<stdio.h>

int main(){
int n,a=0,b=1,c,t,t1,d,d1;scanf("%d",&n);
for(int i=1;i<n;i++){
    if(a<=n){t=a;}
    if(a>=n){t1=a;}
    if(a>n){break;}
    c=a+b;
    a=b;
    b=c;
}
d=n-t,d1=t1-n;
if(d==d1){printf("%d %d",t,t1);}
else{(d>d1)? printf("%d",t1):printf("%d",t);}
}