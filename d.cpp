#include<bits/stdc++.h>
#include<stdlib.h>
#include<time.h>
using namespace std;

int main(){
    srand(time(0));
    int l = rand()%3,g=0;
    int i=g++;
    int n =99;
    float k =909;
    char t = 'c';
    void *ptr=&l;
    int *ptr1;
     
     ptr1 = (int *)malloc(1*sizeof(int));

         
   if(i==0){
     ptr1[0] = main();

     }else{
         return 0;
     }  
    
    ptr1[0] = main();
    free(ptr1);
    cout<<endl<<ptr1[0]<<endl;
    // null pointer can't dereference
    if(ptr==NULL){
        cout<<"the pointer is null pointer you can be dereference ";
    }else
    {

cout<<*(int *)ptr;
    }
    if(l==0){
        ptr = &n;
    }
    if(l==1){
        ptr = &k;
    }
    if(l==2){
        ptr = &t;
    }
    if(l==0){
        cout<<endl<<*(int *)ptr;
    }
    if(l==1){
        cout<<endl<<*(float *)ptr;
    }
    if(l==2){
        cout<<endl<<*(char *)ptr;
    }
    i++;
return 0;
}
