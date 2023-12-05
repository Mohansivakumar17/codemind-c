#include<stdio.h>

void c(int arr[],int n,int t);

void c(int arr[],int n,int t){
    int s=0;
    for(int i=0;i<t;i++){
    if(arr[i]==n){s=1;}
    }
    if(s>=1)printf("True");
    else printf("False");
}

int main(){
int m,t;scanf("%d",&m);
int arr[m];
for(int i=0;i<m;i++){scanf("%d",&arr[i]);}
scanf("%d",&t);
c(arr,t,m);
}