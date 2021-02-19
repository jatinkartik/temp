#include<bits/stdc++.h>
using namespace std;

int main(){
 FILE *ptr,*ptr1;
 ptr = fopen("bill.txt","w");
 ptr1 = fopen("billrecord.txt","a+");
 string name,item;
 int price;
 cout<<"Enter customer name :";
 cin>>name;
 fflush(stdin);
 cout<<"Enter the item name customer purchase :";
 cin>>item;
 fflush(stdin);
 cout<<"Enter the item price customer purchase :";
 cin>>price;

fprintf(ptr,"Date :-  %s \n Time :- %s \n thanks %s for purchasing %s  at price %d for our outlet mohan gallery \n for more information contact 9639604080\n\n\n\n ",__TIME__,__DATE__,name,item,price);
fprintf(ptr1,"Date :-  %s \n Time :- %s \n customer name - %s item - %s  price - %d \n\n\n\n\n\n\n\n\n\n",__TIME__,__DATE__,name,item,price);
fclose(ptr);
fclose(ptr1);
return 0;
}