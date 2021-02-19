#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
using namespace std;

int main(){
    FILE *ptr;
    int j,k;
    char array[16][15];
    ptr = fopen("screenshot (85).txt","r");
    char *ptr1;

   ptr1 = (char *)malloc(10*sizeof(char)); 
        ptr1 = (char *)malloc((k+6)*sizeof(char));
    for( j = 0; j>=0;j++){
   ptr1[j] = fgetc(ptr);
   if(ptr1[j]==EOF){
     break;
   }
    }
    for(int i = j; i>=0; i--){
      cout<<ptr1;
      ptr1--;
    }
  
fclose(ptr);
return 0;
}