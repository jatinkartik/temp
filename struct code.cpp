#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>
#include<string.h>
struct employee{
    char name[23];
    int code;
    float salary;
};
void pass(struct employee e1){
   printf("\n the name of the employee is %s",e1.name);    
    printf("\n the code of the employee is %d",e1.code);    
    printf("\n the salary of the employee is %.2f",e1.salary); 
}
int main(){
	struct employee e0;
	struct employee *ptr;
//	ptr = &e1;
//	 ptr->code = 43;
//	 ptr->name = "harry";
//	 ptr->salary = 88;
	 
printf("\n ENTER THE NAME OF THE EMPLOY : - ");
gets(e0.name);
printf("\n ENTER THE CODE OF THE EMPLOY : - ");
scanf("%d",&e0.code);
printf("\n ENTER THE SALARY OF THE EMPLOY : - ");
scanf("%f",&e0.salary); 
printf("\n now callig the function to test the code\n");
pass(e0);
printf("\n now exiting out from the functions ");

return 0;
}
