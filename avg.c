#include<stdio.h>
float avghght(int age[],int n);
int main()
{
int age[30],n,i;
float avgh;
printf("enter the total students:");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("\nEnter age one by one %d:",i+1);
scanf("%d",&age[i]);
}
avgh=avghght(age,n);
printf("Average height is:%f",avgh);return 0;

}
float avghght(int age[],int n)
{
int h[n],i;
float avg,sum=0.0;
for(i=0;i<n;i++)
{
if(age[i]==16)
h[i]=168;
else if(age[i]==17)
h[i]=170;
else if(age[i]==18)
h[i]=172;
else
if(age[i]==18)
h[i]=175;
sum=sum+h[i];
avg=sum/n;

return avg;
}