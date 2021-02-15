#include<stdio.h>
#include<stdlib.h>
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>
#include<string.h>


void calculate_the_maximum(int , int );
int maximum(int , int);
int maximum(int a , int b){	
	if(a>b){
		return a;
	}
	else{
		return b;
	}
}


void calculate_the_maximum(int n, int k) {
    int i=1 , j=1, or , and, xor ,or_max= -1000, and_max= -1000, xor_max= -1000;
    for(i=1;i<=n-1;i++){
        for(j=i;j<n;j++){
            and = (i & (j+1));
            if(and < k){
            and_max =maximum(and_max, and);
        }
        for(j=i;j<n;j++){
            printf("hello bro");
            or = (i | (j+1));
            if(or < k){
            or_max = maximum(or_max , or);
            printf("hiii");
        }
        }
        
        for(j=i;j<n;j++){
            xor = (i ^ (j+1));
            if(xor < k){
            xor_max =maximum(xor_max, xor);   

        }
    }
        }
    }    


printf("%d\n", and_max);
printf("%d\n", or_max);
printf("%d\n", xor_max);
}    

int main() {
    
    int n, k;
    printf("enter the value of n , k : ");  
    scanf("%d  %d", &n, &k);
    calculate_the_maximum(n, k);
    return 0;
}