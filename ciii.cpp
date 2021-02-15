#include<stdio.h>

int main(){
	int size;
	printf("enter the size of array : ");
	scanf("%d",&size);
	int array[size];
	printf("enter the array element one by one \n");
	for (int i = 0; i < size; i++){
		printf(" %d \t ", i+1);
		scanf("%d",&array[i]);
		fflush(stdin);
	}
	 printf("\n displaying reverse array \n");
	 for(int j = size-1;j>= 0; j--){\
	 printf("%d \t",array[j]);
	 printf(" - > %d\n",&array[j]);
	 }
}
