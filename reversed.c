#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>
#include<string.h>

int main(){
int original,temp,remainder=0,reversed=0,sum = 0;
printf("\n ENTER THE VALUE PF THE ORIGIONAL NUMBER : - ");
scanf("%d",&original);
temp = original;

while(original != 0){
    remainder = original%10;
reversed = sum + remainder;
    sum = reversed*10;
original = original/10;
// printf("the reversed no is %d ",reversed);
}
if(temp == reversed){
    printf("\nTHE NO IS RVERSIVIBLE\n");
}
else
{
    printf("\n THE NO IS NOT REVERSIVIBLE");
}

// printf("\n  THE REVERSED NO IS : - %d ",reversed);
return 0;
}