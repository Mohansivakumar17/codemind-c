#include<stdio.h>
int main(){
int n;scanf("%d",&n);
int arr[n],s=0;
for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
    s+=arr[i];
}
for(int i=0;i<n;i++){
    if(arr[i]==(s/n)){s=0;}
}
if(s==0) printf("True");
else printf("False");
    
}