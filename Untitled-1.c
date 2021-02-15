#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>
#include<string.h>

int main(){
int n,t;
float *ptr;

printf("enter the value of n\n");
scanf("%d",&n);
ptr = (float*)malloc(10*sizeof(float));

for(int i= 0;i<10;i++){
    ptr[i]=(i+1)*n;
}
for(int j= 0;j<10;j++){
printf("the value of %f \n",ptr[j]);
}
free(ptr);
ptr = (float*)malloc(15,sizeof(float));

printf("enter the value of n\n");
scanf("%d",&t);
for(int h= 0;h<15;h++){
    ptr[h]=(h+1)*n;
}
for(int g= 0;g<15;g++){
printf("the value of %f \n",ptr[g]);
}
return 0;
}