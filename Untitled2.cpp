#include<stdio.h>

int main(){
	int n;
	int k=0;
	printf("enter the value ");
	scanf("%d",&n);
	for (int j = 1; j < n; j++ ){
			int c=0;
	for(int i = 1; i<=j; i ++){
		if(j%i==0){
			c++;
		}
	}
		if(c==2){
		printf("%d\t",j);
		k++;
		
}
		
	
	}
	printf("\n the total prime no till value entered by user is %d",k);
		
}

