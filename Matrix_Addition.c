#include<stdio.h>
int main(){
    int m,n;scanf("%d%d",&m,&n);
    int mat[m][n];
    for(int i=0;i<m;i++){
      
      for(int j = 0;j < m; j++){
          scanf("%d",&mat[i][j]);
      }  
        }
        
    int m1,n1,mat1[m][n];scanf("%d%d",&m1,&n1);
    
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&mat1[i][j]);
             }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            printf("%d ",mat[i][j]+mat1[i][j]);
        }
        printf("
");
    }
}