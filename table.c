#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>
#include<string.h>

int main(){
FILE *ptr;
int r = 8;
int num[34];
// int num2;
ptr = fopen("sample.txt","w");
for(int i=0;i<10;i++){

// fscanf(ptr,"%d",&num[i]);
printf("%d X %d = %d\n",r,i+1,r*(i+1));
fprintf(ptr,"%d X %d = %d\n",r,i+1,r*(i+1));
}
fclose(ptr);


return 0;
}