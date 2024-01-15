#include <stdio.h>

int main() {
   char str[1000];
   fgets(str,1000,stdin);     

   
   int s=0,t;
   for(int i=0;str[i]!=NULL;i++)
   {   t=0;
       for(int j=i;str[j]!=0;j++){
           if(str[i]==str[j])
           {t++;}
       }
       if(t>1){printf("False");s++;break;}
       
   }
   
   if(s==0){printf("True");}
   

   
}                 