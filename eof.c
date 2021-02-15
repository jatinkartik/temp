#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>
#include<string.h>

int main(){
FILE *ptr;
ptr = fopen("sample2.txt","r");
char c;
c = getc(ptr);
while(c!=EOF){
    printf("the value of character is %c\n",c);
    c=getc(ptr);
};
return 0;
}