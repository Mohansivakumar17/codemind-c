#include<stdio.h>


int main(){
int m;scanf("%d",&m);
int arr[m];
for(int i=0;i<m;i++){
    scanf("%d",&arr[i]);
}
int s=0;
for(int i=0;i<m;i++){
    
        if(arr[i-1]%2!=0&&arr[i]%2==0&&arr[i+1]%2!=0){s++;
           
        }
    
    
}

printf("%d",s);
}