#include<stdio.h>
#include<math.h>
int main(){
int n;scanf("%d",&n);int j;
for(int i=1;i<=n;i++){
if(i*i==n){j=i;}
}
if(j*j==n){printf("True");}
else{printf("False");}
}