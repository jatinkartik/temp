#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>
#include<string.h>
typedef struct students{
    int rollno;
    float percentage;
    char name[24];
}jatin;
void show(struct students *countt){
    printf("\nTHE NAME OF THE STUDENTS IS %s",countt->name);
    printf("\nTHE ROLLNO OF THE STUDENTS IS %d",countt->rollno);
    printf("\nTHE PERCENTAGE OF THE STUDENTS IS %f",countt->percentage);


    printf("\nHERE I M CHNGING THE VALUES OF PARAMETERS LETS CHECK ITS CHANGES OR NOT");
// countt->name[24] = "arush kumar tyagi";
countt->rollno = 43;
countt->percentage = 99;
}
int main(){
jatin count;
jatin *ptr;
ptr = &count;
printf("\nENTER THE NAME OF THE STUDENTS  : --");
gets(count.name);
// scanf("%s", count.name);
printf("\nENTER THE ROLL NO OF THE STUDENTS :--");
scanf("%d",&count.rollno);
printf("\nENTER THE PERCENTAGEOF THE STUDENTS : --");
scanf("%f",&count.percentage);
printf("\nCALLING THE FUNCTIION ***************************************************************************");
show(ptr);
printf("\nEXTIING  THE FUNCTIION ***************************************************************************");
 printf("\nTHE NAME OF THE STUDENTS IS %s",count.name);
    printf("\nTHE ROLLNO OF THE STUDENTS IS %d",count.rollno);
    printf("\nTHE PERCENTAGE OF THE STUDENTS IS %f",count.percentage);

return 0;
}