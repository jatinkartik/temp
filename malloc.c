#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>
#include<string.h>

int main(){
FILE *ptr1;
ptr1 = fopen("sample.txt","a");
float *ptr;
ptr = (float *)calloc(8,sizeof(float));
// here we can use this memory allocation function as array wtih defined size this help to optimize the function
printf("enter the value one by one ");

for(int i= 0 ; i<8; i++){
    scanf("%f",&ptr[i]);
}
for(int j= 0 ; j<8; j++){
printf("the values enterd by the user is %f \n",ptr[j]);
fprintf(ptr1,"the value entered by user is as follow %f\n",ptr[j]);
}
free(ptr);
// ptr = realloc(ptr,5*sizeof(int));

fclose(ptr1);
// for(int k= 0 ; k<5; k++){
//     scanf("%f",&ptr[k]);
//     fflush(stdin);
// }
ptr = (float*)calloc(ptr,8*sizeof(float));
for(int l= 0 ; l<5; l++){
printf("the values enterd by the user is %f \n",ptr[l]);
}
return 0;
}