#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>
#include<string.h>
typedef struct complex{
    int x;
    int y;
}ver;
int main(){
ver e1[5];
printf("ENTER THE VALUE OF STRUCTURE");
for (int i=0;i<5;i++){
    printf("\n ENTER THE VALUE OF X  %d: --",i+1);
    scanf("%d",&e1[i].x);

    printf("\n ENTER THE VALUE OF Y  %d: --",i+1);
    scanf("%de",&e1[i].y);
}

printf(" \n NOW DISPLAYING THE VALUE THAT TALEN BY ARRAY");
for (int j=0;j<5;j++){
    printf("\n ENTER THE VALUE OF X  %d: --%d",j+1,e1[j].x);

    printf("\n ENTER THE VALUE OF Y  %d: --%d",j+1,e1[j].y);
}
return 0;
}