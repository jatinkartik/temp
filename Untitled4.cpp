#include<stdio.h>
#include<string.h>

int main(){
	int i,j,k;
	int l = 0,n =0;
	char string[88];
	char second[8][88];
	gets(string);
	k = strlen(string);
	for(i = 0; i < k; i++ ){
	
		for( j = l; j < k; j++){
			if(string[j]>=65 && string[j]<=122){
				 second[i][n] = string[l];
				 l++;
				 n++;
			}
			else
			{
				if(l==k){
				goto A;
				}
				l++;
				n = 0;
		
				
			}
		}
		printf("%c",second[2][0]);
	}
A:
	printf("%s",second[2]);
}
