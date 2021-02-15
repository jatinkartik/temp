#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>
#include<string.h>
typedef struct vector{
    int x;
    int y;
}vect;
vect sum( vect l, vect h){
vect result;
result.x = l.x +h.x;
result.y = h.y+l.y;
return result;
}
int main(){
    vect tr1,tr2,summ;
printf("\n ENTER THE VALUE OF X DIMENSION");
scanf("%d",&tr1.x);
printf("\n ENTER THE VALUE OF y DMENSION");
scanf("%d",&tr1.y);
printf("\n ENTER THE VALUE OF X DIMENSION");
scanf("%d",&tr2.x);
printf("\n ENTER THE VALUE OF y DIMENSION");
scanf("%d",&tr2.y);
printf("\nHERE WE CALLING THE FUCTION SUM ");
summ = sum(tr1,tr2);
printf("\n THE VALUE OF THE FUNCTION IS %d AND %d",summ.x,summ.y);

return 0;
}