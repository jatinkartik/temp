#include<bits/stdc++.h>
#include<string.h>
using namespace std;

int main(){
    string hex;
    cout<<"Enter the hexadecimal value :";
    cin>>hex;
    int lastdigit,sum=0;
    int len = hex.size();
    int h = 1;
    int y =1;
    for(int i = len -1; i>=0; i--){
        if(hex[i]>='0'&&hex[i]<='9'){
            lastdigit = hex[i] - '0';
        }
        if(hex[i]>='A'&&hex[i]<='F'){
            lastdigit = hex[i] -'A' +10;
        }  
        sum += lastdigit*h;
        h *= 16;
    }
    cout<<endl<<sum<<endl;

return 0;
}
