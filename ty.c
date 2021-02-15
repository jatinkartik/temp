#include<stdio.h>
int main()
{
int num1,num2,num3,num4;
printf("enter the four values which u want to check greater or not");
scanf("%d %d %d %d",&num1,&num2,&num3,&num4);
num1>num3?(num1>num2?printf("num1 is greater"):printf("num2 is greater ")):(num3>num4?printf("num3 is greater"):printf("num4 is greater"));
return 0;
}