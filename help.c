#include<stdio.h>

int main()

{

int n;

printf("enter the total no person ");

scanf("%d",&n);

float amount[n],p,q,r;
// here declaring variabls bcz  amount can be in float 

printf("enter the amount of each person  one by one");

for(int i=0;i<n;i++)
{
printf("enter the amount of person %d :-  ",i+1);
scanf("%f",&amount[i]);
}
// here we take amount by the help of for loop in amount

for(r=1;r<=amount[0];r++){
for(q=1;q<=amount[0];q++){
for(p=1;p<=amount[0];p++){
if((r*1+q*0.50+p*0.25)==amount[0])
goto A;
}
}
}
A:

printf("Person 1 Rs 50 paise 25 paise\n");

for(int i=0;i<n;i++)

{

printf("%d %11.0f %7.0f %11.0f \n",i+1,r*(amount[i]/amount[0]),q*(amount[i]/amount[0]),p*(amount[i]/amount[0]));

}

return 0;

}