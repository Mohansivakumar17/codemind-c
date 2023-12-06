#include<stdio.h>


int main(){
int m;scanf("%d",&m);
int arr[m];
for(int i=0;i<m;i++){
    scanf("%d",&arr[i]);
}
int s=0,s1=0;
for(int i=0;i<m;i++){
    
        if(arr[i]%2!=0){s1++;
            if(i%2!=0||i==1){s++;}
        }
    
    
}
if(s==s1) printf("True");
else printf("False");
}