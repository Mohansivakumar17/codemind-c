#include<stdio.h>
int main(){
int n;scanf("%d",&n);int r,re=0,r1,re1=0;
int n1=n*n;
while(n!=0){
    r=n%10;
    re=re*10+r;
    
    n/=10;
}
int t1=re*re;
while(t1!=0){
    r1=t1%10;
    re1=re1*10+r1;
    
    t1/=10;
}if(n1==re1){printf("True");}
else{printf("False");}
}