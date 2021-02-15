#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>
#include<string.h>

int main(){
int n;
printf("Enter the value of n\n ");
scanf("%d",&n);

for(int i=1;i<n;i++){
    int c = 0;
    for(int j=1;j<=i;j++){
if(i%j==0){
    c++;
} 
    }
if(c==2){
printf("%d \t",i);
}
}
return 0;
}