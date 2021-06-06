#include<iostream>
#include<stdlib.h>
using namespace std;
#define PI 3.14
int sum(int a, int m){
    int j = a *m;
    return j;
}
void helloworld(int (*fptr)(int,int)){
    cout<<"hello brother how are you i am here to help you dont worry  so lets gets started"<<endl;
    cout<<sum(55,55);
}

void good_afternoon(int (*ptr)(int,int)){
    cout<<"your welcome "<<endl;
    cout<<sum(55,55);
}
int main(){
    int h ,k;
    int (*ptr)(int,int);
    cout<< "Enter the value of j and k  :";
    cin>>h>>k;
    cout<<"the sum of j and k is "<<sum(h,k)<<endl;
    ptr = sum;
    int d = (*ptr)(h,k);
 
    cout<<"the value of d is "<<(int)(d*PI);
cout<<"\a"<<endl;
return 0;
}