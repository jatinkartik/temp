#include<stdio.h>
#include<math.h>
#define print printf
#include "cpp3.cpp"
#define SQUARE(a,c) pow(a,c) // square macros defines

int main(){
	int a;
	int i;
	int kk =8;
	print("enter the value ");
	scanf("%d",&a);
	for( i = 2; i<a; i ++){
		if( a%i == 0 && a!=i ){
			print("not prime %llllld ",SQUARE(a,kk));
			
			return 0;
		}

	}
	print("prime %d ",main2());
}
