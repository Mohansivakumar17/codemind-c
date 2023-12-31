#include<stdio.h>
int main()
{
    char str[100];
    fgets(str,100,stdin);
    int s=0;
    for(int i=0;str[i]!=NULL;i++)
    {
        if(str[i]>=48&&str[i]<=57)
        {
            int t=str[i]-'0';
            s+=t;
        }
    }
    printf("%d",s);
}