#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>
#include<string.h>

int main(){
FILE *ptr;
ptr = fopen(ptr,"simple2.txt","w");
for(int i = 0; i < 10;i++){
for(int j = 0; j < 10;j++){
for(int k = 0; k < 10;k++){
for(int l = 0; l < 10;l++){
for(int m = 0; m < 10;m++){
fprintf("%d %d %d %d %d\t",i,j,k,l,m);
}
fprintf("\n");
}
}
}
}
}

return 0;
}
