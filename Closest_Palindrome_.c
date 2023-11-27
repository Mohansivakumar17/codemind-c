#include<stdio.h>
 int main(){
 int n;scanf("%d",&n);int r,r1,s,s1,t=n,d,d1;

for(int i=n,j=n;i<=n*n||j>=1;i++,j--){s=0,s1=0;d=i,d1=j;
 while(d!=0){
 r=d%10;

s=s*10+r;

d/=10;
 }
 while(d1!=0){

r1=d1%10;

s1=s1*10+r1;

d1/=10;
}

if(i==s&&j==s1&&i>n&&j<n){printf("%d %d
",j,i); break; }

else if(i==s&&i>n){printf("%d
",i); break; }
else if(j==s1&&j<n){printf("%d
",j); break; }

 }
}