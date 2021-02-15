#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>
#include<string.h>

int main(){
FILE *ptr;
FILE *ptr1;
// int num[34];
// int num2;
ptr = fopen("sample.txt","r");
ptr1 = fopen("sample2.txt","w");
char c;
c = fgetc(ptr);
while(c!=EOF){
fprintf(ptr1,"%c",c);
fprintf(ptr1,"%c",c);
printf("%c\n",c);
c = fgetc(ptr);
}
// fscanf(ptr,"%d",&num[1]);
// fscanf(ptr,"%d",&num[2]);
// fscanf(ptr,"%d",&num[3]);
// printf("%d %d",num[2],num[3]);
// fprintf(ptr,"hi jatin how are you your roll no is %d ",num);


return 0;
}