#include<stdio.h>
int main(){
int m,t;scanf("%d",&m);
int arr[m],e[m],o[m],ei=0,oi=0;
for(int i=0;i<m;i++){
    scanf("%d",&arr[i]);
}
for(int i=0;i<m;i++){
    t=arr[i];
    
    if(t%2==0){e[ei++]=t;}
    else{o[oi++]=t;}
    
}
for(int i=0;i<oi;i++){
    printf("%d ",o[i]);
}
for(int i=0;i<ei;i++){
    printf("%d ",e[i]);
}
}