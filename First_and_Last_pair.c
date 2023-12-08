#include<stdio.h>
int main(){
int m;scanf("%d",&m);
int arr[m];
for(int i=0;i<m;i++){
    scanf("%d",&arr[i]);
}

for(int i=0;i<m/2;i++){
    printf("%d %d ",arr[i],arr[m-i-1]);
}
if(m%2!=0){printf("%d 0 ",arr[m/2]);}
}