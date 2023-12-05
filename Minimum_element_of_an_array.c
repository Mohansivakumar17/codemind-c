#include<stdio.h>
int main(){
int n;scanf("%d",&n);
int arr[n],min=1000;
for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
    if(arr[i]<min){min=arr[i];}
}
printf("%d",min);
}