#include<stdio.h>
int main()
{   int t,x=0;scanf("%d",&t);
while(t--){
    char str[100];
    
    scanf("%s",str);
   
    for(int i=0;str[i]!=NULL;i++)
    {
        if(str[i]=='-'&&str[i+1]=='-'){x--;}
        else if(str[i]=='+'&&str[i+1]=='+'){x++;}
    }
      }printf("%d",x);
}