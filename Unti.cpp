#include<stdio.h>
#include<string.h>
int main()
{  
char x[5555];
int i=0;
printf("enter string:");
gets(x);
int a = strlen(x);
printf("The length of string is %d",a);

printf("\n ");
while(x[i]!='\0')
{  
if(x[i]>='A' && x[i]<='Z')
{  
x[i]=x[i]+32;
printf("%c",x[i]);
}
else{
    printf(" ");
}
i++;
}
}
