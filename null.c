#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>
#include<string.h>

int main(){
FILE *ptr;
int num1,num2;
ptr = fopen("sample.txt","r");
if(ptr == NULL){
    printf("this file doesn't exits");
}
    else{
        fscanf(ptr,"%d",&num1);
        fscanf(ptr,"%d",&num2);
        fclose(ptr);
        printf("the value of num 1 and num is %d and %d ",num1,num2);
    
    }
return 0;
}