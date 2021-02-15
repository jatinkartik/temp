#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>
#include<string.h>

int main(){
char ch[6];
int l=0,k=0,j=0,m=0;
printf("enter the string");
for(int i =0;i<6;i++){
    printf("enter the %d character\n",i+1);
    scanf("%c",&ch[i]);
fflush(stdin);
    if(ch[i]>= 'a' && ch[i]<= 'z'){
l++;
    }
else
if(ch[i]>= 'A'&& ch[i]<= 'Z'){
j++;
    }
else
if(ch[i]>= '0'&& ch[i]<= '9'){
m++;
    }
    else
    if(ch[i]=='!'|| ch[i]== '@'||ch[i] == '#'||ch[i] =='$'||ch[i] =='%'||
    ch[i] =='^'||ch[i] =='&'||ch[i] =='*'|| ch[i] =='('||ch[i]==')'||ch[i] =='-'||ch[i] == '+'){
k++;
    }
}
printf("the value of your password is %d %d %d \n",l,k,j);

if(k>=1 && j>=1 && l>=1 && m>=1){
    printf("your password is strong\n");
}
else
if(k==0 && j>=1 && l>=1 && m>=1){
    printf("you missed  special character\n");
}
else
if(k>=1 && j==0 && l>=1 && m>=1){
    printf("your password is upper case\n");
}
else
if(k>=1 && j>=1 && l==0 && m>=1){
    printf("your password is lower case\n");
}
else
if(k>=1 && j>=1 && l>=1 && m==0){
    printf("your password is no\n");
}
return 0;
}