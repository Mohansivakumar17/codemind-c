#include<stdio.h>
int main() {

    int n;
    scanf("%d",&n);
    int s,s1,t=0,t1=n,t3;

    for(int i=1; i<n; i++) {
        s=0;
        for(int j=1; j<=i; j++) {
            if(i%j==0) {
                s++;
            }
        }
        if(s==2) {
            t=i;
        }
        for(int k=t; k<n; k++) {
            s1=0;
            for(int l=1; l<=k; l++) {
                if(k%l==0&&k>t) {
                    s1++;
                }
            }
            if(s1==2&&t*k==n) {
                t3=k;
                break;
            }
        }
        if(t*t3==n) {
            break;
        }
    }
    if(t*t3==n) {
        printf("%d %d",t,t3);
    }
    else {
        printf("-1");
    }
}