#include<stdio.h>
int main(){
int n;scanf("%d",&n); int k=n,r;
int s=0,s1=0,s2=0,s3=0,s4=0,s5=0,s6=0,s7=0,s8=0,s9=0;
 while(n!=0){
      r=n%10;
      if(r==0){s ++; }
 else if(r==1){s1++; } 
 else if(r==2){s2++; }
 else if(r==3){s3++; }
 else if(r==4){s4++; }
 else if(r==5){s5++; }
 else if(r==6){s6++; }
 else if(r==7){s7++; } 
 else if(r==8){s8++; }
 else if(r==9){s9++; }
 n/=10;              }
 if(s>1||s1>1||s2>1||s3>1||s4>1||s5>1||s6>1||s7>1||s8>1|| s9>1){printf("Not Unique Number");}
 else{printf("Unique Number");}}
