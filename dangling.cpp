#include<bits/stdc++.h>
using namespace std;
int *myfunc();
int main(){
    int *wildpointer;
    int kull = 99;
int *ptr = myfunc();
{
    int jj= 77;
   // printf("the value of jj is %d",jj);
    ptr = &jj;
}
cout<<wildpointer; //wild pointer cant be 
// dereffernce so it is suggested to intialised wild pointer to NULL
wildpointer = &kull; //pointer is no longer wild 
cout<<&ptr;
int *pointer = (int *)malloc(8*sizeof(int));
for(int h = 0; h<8; h++){
    cout<<"Enter the value of "<<h+1;
    cin>>pointer[h];

}
free(pointer);
cout<<endl;
for(int g = 0; g<8; g++){
    cout<<pointer[g]<<"  ";
}
return 0;
}
int *myfunc(){
    int k = 4;
    return 0;
}