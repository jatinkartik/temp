#include<stdio.h>
int main(){
short i = 2147483640;
long double  k = 9999999999;
	printf("%d %d %d",sizeof(i),sizeof(k),sizeof(k+i));
	return 0;
}
