#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
using namespace std;

int main(){
int n,k;
cout<<"Enter the value of n:";
cin>>n;
k = n;
int o = 1;
for(int i = 1; i <=n; i++){
    for(int j = 1; j< k; j++){
    cout<<" ";
    }
    for(int l = 1; l <= o; l++){
        if(l==1||l==o){

    cout<<"* ";
}
else
{
    cout<<"  ";
}
    }
    for(int j = 1; j< k; j++){
    cout<<" ";
    }
    for(int j = 1; j< k; j++){
    cout<<" ";
    }
    for(int l = 1; l <= o; l++){
if((l==1||l==o)&&(i<n)){

    cout<<"* ";
}else
if(l==1&&i==n){
    cout<<"* ";
}else
 if(l==o&&i==n){
    cout<<" *";
}
else
{
    cout<<"  ";
}
    }

    cout<<endl;
    k--;
    o++;
}
return 0;
}