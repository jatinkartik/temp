#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
using namespace std;

int main(){
int i,no;
int n01 = 0,n02 = 1;// by default we give the value 0 and 1
cout<<"enter the number of terms you want:";
cin>>no;

long long int sum=1;
int *arr;
arr = (int*)malloc(1*sizeof(int));
for( i = 1;i<no; i++){
    cout<<sum<<"\t";
    sum = n01 + n02;
    n01 = n02;
    n02 = sum;
    arr[i - 1] = sum;
    arr = (int*)realloc(arr,sum*sizeof(int));
}
cout<<sum<<endl;
cout<<endl<<"now missed no"<<endl;
for(i = 1; i <= sum; i++){
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