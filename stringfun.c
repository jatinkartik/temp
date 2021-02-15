#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>
#include<string.h>

int main(){
char string[] = "jatin kartik tyagi is great",
char *ptr = &string;

int n;
n = strlen(string);
while(*ptr == '\0')
{
    printf("%c",string[i]);
    ptr++;
}
    return 0;
}