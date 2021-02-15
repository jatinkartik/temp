#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
using namespace std;

int main(){
int i,no;
int n01 = 0,n02 = 1;// by default we give the value 0 and 1
cout<<"enter the number :";
cin>>no;
// for custom input in fib siries
cout<<"Enter the value of n01 and n02 :";
cin>>n01>>n02;

long long int sum;
int *arr;
arr = (int*)malloc(1*sizeof(int));
for( i = 1; i<no; i++){
    sum = n01 + n02;
    arr[i - 1] = sum;
    arr = (int*)realloc(arr,sum*sizeof(int));
    cout<<sum<<"\t";
    n01 = n02;
    n02 = sum;
}
cout<<endl<<sum<<endl;
cout<<endl<<"now missed no"<<endl;
for(i = 0; i <= sum; i++){
int h = 0;
    for(int j = 0; j <= i; j++){
        if( i == arr[j]){
            h++;
        }
    }
    if(h==0){
        cout<<i<<"\t";
    }
}
return 0;
}
