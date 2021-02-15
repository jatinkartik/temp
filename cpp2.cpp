#include<stdio.h>

int main(){
	int a;
	printf("enter the value ");
	scanf("%d",&a);
	for(int i = 2; i<a; i ++){
		if( a%i == 0 && a!=i ){
			printf("not prime ");
			return 0;
		}

	}
	printf("prime ");
}
