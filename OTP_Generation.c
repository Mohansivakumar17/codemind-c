#include<stdio.h>

int main()
{
    char str[10];
    fgets(str,10,stdin);
    int t=0,t1;
    char str1[10];
    for(int i=0;str[i]!=NULL;i++)
    {
        t1=str[i]-48;
        if(t1%2==0&&t1!=1){continue;}
        else{printf("%d",t1*t1);
           
            
        }
    }
   
}