#include<stdio.h>
int main(){
	int n,cr;
	printf("enter the size of array : ");
	scanf("%d",&n);
	int array[n];
	printf("\n enter the %d element one by one  :\n ",n);
	for(int i = 0; i < n ; i++){
		printf("enter the %d element",i+1);
		scanf("%d",&array[i]);
	}
	printf("\n comparing value \n ****************************************************************\n");
	for(int i = 0; i < n; i ++){
		cr=0;
		for(int j = 0; j <= n; j ++){
			if(i!=j){
				if(array[i]==array[j]){
					cr++;
				}
				
		}
		
}
if(cr==0){
					printf("%d \t ",array[j]);
				}
	}
}
