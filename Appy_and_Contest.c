#include<stdio.h>
int main(){
int t;scanf("%d",&t);
while(t--){
    int n,a,b,m,n1=0,n2=0;scanf("%d%d%d%d",&n,&a,&b,&m);
    for(int i=1;i<=n;i++){
        if(i%a==0&&i%b!=0){n1++;}
        if(i%b==0&&i%a!=0){n2++;}
    }if((n1+n2)>=m){printf("Win
");}
    else{printf("Lose
");}
}
}