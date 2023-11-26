#include<stdio.h>
int main(){
int n;
    scanf("%d", &n);
    int t = n, r, s = 0, s1 = 0, s2 = 0;
    for (int i = 1; i <= t; i++)
    {
        if (n % i == 0)
        {
            s++;
        }
    }
    if (s == 2)
    { 

        while (t!=0)
        {
            s2++;
            r = t % 10;
            if (r == 2 || r == 3 || r == 5 || r == 7)
            {
                s1++;
            }
            else{break;}
            t/=10;
        }
    }
    if (t==0)
    {
        printf("Mega Prime");
    }
    else
    {
        printf("Not Mega Prime");
    }}