#include<stdio.h>

int main()
{
    int i,j,k=0,n;
    
    printf("Enter the number till which you want to print *\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++,k=0)
   { 
   for (int h = 1; h<=n-i;h++){
   	printf("  ");
   }
while(k!=2*i - 1){
	printf("* ");
	k++;
}
printf("\n");
    }
    
}
