#include<stdio.h>
int main(){
    int m;scanf("%d",&m);
    int arr[m];
    for(int i=0;i<m;i++){
        scanf("%d",&arr[i]);
    }
    int t,t1=-1,t2=-1;scanf("%d",&t);int c=-1;
    for(int i=0;i<m;i++){c++;
    
    //if(t==arr[i]&&t1<c){t2=c;}
        if(t==arr[i]){t1=c;break;}
    }c=0;
    for(int i=0;i<m;i++){c++;
        if(t==arr[i]){t2=c-1;}
    }
    
    
    printf("%d %d",t1,t2);
}