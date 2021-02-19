#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
using namespace std;

int main(){
    FILE *ptr;
    int j;
    char array[16][15];
    ptr = fopen("myfile.txt","a+");
    char *ptr1;

   ptr1 = (char *)malloc(100000*sizeof(char));
    for( j = 0; j<10000;j++){
   ptr1[j] = fgetc(ptr);
    }
    for(int i = j -2; i>=0; i--){
      cout<<ptr1;
      ptr1--;
    }
  
 cout<<"the character i read from file is  "<<array<<endl;
fclose(ptr);
 cout<<"the string i read from file is  "<<array<<endl;
return 0;
}