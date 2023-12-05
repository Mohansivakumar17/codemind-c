#include<stdio.h>
int main(){
int n;scanf("%d",&n);
int arr[n],s=0;
for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
    if(i%2!=0||i==1){s+=arr[i];}
}
printf("%d",s);
}