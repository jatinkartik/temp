#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int main()

{
   int usrchoice, number, i;
   while(1)

   {

printf("\n\n\n\n");
       printf("1. PRESS 1 TO CHECK NO EVEN OR ODD\n");
       printf("2. PRESS 2 TO CHECK NO IS NEGATIVE OR POSITIVE\n");
       printf("3. PRESS 3 TO SQUARE OF NUMBER \n");
       printf("4. PRESS 4 TO FIND SQUARE ROOT OF NUMBER\n");
       printf("5. PRESS 5 TO EXIT \n");
       printf("Enter choice : ");
       scanf("%d",&usrchoice);
    
       switch(usrchoice)
       {
           case 1:
               printf("\nEnter number:\n");
               scanf("%d", &number);
               if(number%2 == 0){
                   printf("\n%d is an Even number\n",number);
               }
               else{
                   printf("\n%d is an Odd number\n",number);
               }
               break;

       

           case 2:
               printf("\nEnter number:\n");
               scanf("%d", &number);
               if(number>0){
               printf("number is positive number\n");
           }
               else{
               printf("number is negetive number\n");
           }
                   break;

                      

           case 3:
               printf("\nEnter number:\n");
               scanf("%d", &number);
               printf("Square of a number is %ld", number*number);
               break;

           case 4:
               printf("\nEnter number:\n");
               scanf("%d", &number);
               printf("Square root of a number is %lf", sqrt(number));
               break;

           case 5:
               exit(1);   
       }
   }

   return 0;
}
