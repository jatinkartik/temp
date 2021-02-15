#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>
#include<string.h>

int main(){
printf("enter the character one by one");
char string[] = {'j','a','t','i','n','\0'};
puts(string);
printf("\n the size of string is %d",sizeof(string));
char strg[] = "jatin kartik tyagi is great person";
puts(strg);
printf("\n the string is %s",strg);
return 0;
}