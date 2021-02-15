#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>
#include<string.h>

int main(){
int j,k;
printf("Enter the rows and colum of rectangular pattern:");
scanf("%d %d",&j,&k);

for(int i = 1; i <= j; i++){
    for(int l = 1; l <= k; l++){
        
        if(l == k){
        printf("*");
        }
        else
        if(i==j){
            printf("*");
        }
        else
        if(i==1){
            printf("*");
        }
        else
        {
            if(l==1){
                printf("*");
            }
        else
        {
            printf(" ");
        }
        }
        
        
    }
    printf("\n");
}
return 0;
}