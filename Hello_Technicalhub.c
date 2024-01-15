#include<stdio.h>
int main()
{
    printf("Hello Technicalhub
");
    char str[100];
    fgets(str,100,stdin);
    for(int i=0;str[i]!=NULL;i++)
    {
        printf("%c",str[i]);
    }
}