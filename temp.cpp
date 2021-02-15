#include<stdio.h>

int main()
{
    int i,j,l,k;
    printf("enter the rows and column\n ");
    scanf("%d %d",&l,&k);
     int array[l][k];
    printf("taking value from user *************************************************\n");
    for(i=0;i<l;i++)
    {
        for(j=0;j<k;j++){
        	scanf("%d",&array[i][j]);
		}
        
    }
    
     printf("displaying value  *************************************************\n");
    for(i=0;i<l;i++)
    {
        for(j=0;j<k;j++){
        	printf("%d\t",array[i][j]);
		}
        printf("\n");
    }
    printf("swapping value *************************************************\n");
      int temp;
    for(i=0;i<l;i++)
    {
        for(j=i;j<k;j++){
 int temp = array[i][j];
 array[i][j] = array[j][i];
 array[j][i] = temp;
		}
		printf("printing next \n");
    }
      printf("Displaying value after swapp *************************************************\n");
    for(i=0;i<l;i++)
    {
        for(j=0;j<k;j++){
        	printf("%d\t",array[i][j]);
		}
        printf("\n");
    }
}
