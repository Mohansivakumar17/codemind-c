#include<stdio.h>
int main()
{
    int m,n;scanf("%d%d",&m,&n);
    int arr[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    int s=0;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++)
        {
            if(i==0||j==0||i==m-1||j==n-1)
            {
                s+=arr[i][j];
            }
        }
    }
    printf("%d",s);
}