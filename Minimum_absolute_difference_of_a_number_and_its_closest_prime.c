#include<stdio.h>
#include<stdlib.h>
int main(){
int n,s,p1,s1,s3=0,p;scanf("%d",&n);
for(int i=1;i<=n;i++){
  if(n%i==0){s3++;}  
}if(s3==2){printf("0");}
else{

for(int i=n; ;i++){s=0;
    for(int j=1;j<=i;j++){
        if(i%j==0&&i>n){s++;}
        
    }if(s==2&&i>n){p=i;break;}
}
for(int i=n;i>=1;i--){s1=0;
    for(int j=1;j<=i;j++){
        if(i%j==0&&i<n){s1++;}
        if(n%j==0){s3++;}
    }
    if(s1==2&&i<n){p1=i;break;}
}
int d=(abs(n-p)>abs(n-p1))?abs(n-p1):abs(n-p);
printf("%d",d);}
}
