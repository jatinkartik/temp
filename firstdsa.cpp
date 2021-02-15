#include<stdio.h>
 int main(){
     int a,b,c,d;
     printf("Enter the four value to compare \n ");
     scanf("%d %d %d %d",&a,&b,&c,&d);
     if(a>b && a>c && a>d){
         printf("A is greater ");
     }
     else
     if(b>c && b>d){
         printf("B is greater ");
     }
    else
    if(c>d)
         {
             printf("C is greater ");
         }
         else
         {
             printf("D is greater");
         }
     }