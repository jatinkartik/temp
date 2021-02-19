#include<bits/stdc++.h>
#include<string.h>
using namespace std;

int main(){
    char name[20];
        int number = 0,power=1;
        int long long sum = 0;
        cout<<"Enter the hexadecimal value :- ";
    gets(name);
        int length = strlen(name);
    cout<<"The length of the strlen"<<length<<endl;
    for(int i = length - 1 ; i >=0; i--){
            if(name[i]>='0' && name[i]<='9'){
                number = name[i] - '0';
            } 
            if(name[i]>='A' && name[i]<='F'){
                number = name[i] - 'A' + 10;
            }
            sum += number * power;
            power *= 16;
        }
    cout<<endl<<"The decimal value is "<<name<<" is"<<sum;
return 0;
}